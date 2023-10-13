class Solution {
public:
int fn(vector<int>&dp , int i , int n,vector<int>&cost){
    if(i==0)return cost[0];
    if(i==1) return cost[i];
    if(dp[i]!=-1)return dp[i];
    
    return dp[i]= min(fn(dp,i-1,n,cost),fn(dp , i-2,n ,cost) ) + cost[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
       
        //using tabulation
        int prev = 0;
        int prev2 = 0;
        for(int i=2;i<=cost.size();i++){
            int ans = min(prev + cost[i-1] , prev2 +cost[i-2]);
            prev2 = prev;
            prev = ans;
        }
        return prev;
    }
};