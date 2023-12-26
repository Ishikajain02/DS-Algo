class Solution {
public:
int mod = 1e9+7;
   int fn(vector<vector<int>>&dp,int n,int &k,int target){
       if(dp[n][target]!=-1)return dp[n][target];
       if(n==0 && target==0)return 1;
       if(n<=0)return 0;
       int ans=0;
       for(int i=1;i<=min(k,target);i++){
           ans=(ans+ fn(dp,n-1,k,target-i))%mod;
       }
       return dp[n][target]=ans;

   }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return fn(dp,n,k,target);
    }
};