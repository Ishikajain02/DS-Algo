class Solution {
public:
int fn(vector<int>&dp , int i , int n,vector<int>&cost){
    if(i==0)return cost[0];
    if(i==1) return cost[i];
    if(dp[i]!=-1)return dp[i];
    
    return dp[i]= min(fn(dp,i-1,n,cost),fn(dp , i-2,n ,cost) ) + cost[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        int ans = min(fn(dp, n-1 ,n,cost),fn(dp, n-2 ,n,cost));
        return ans;
    }
};