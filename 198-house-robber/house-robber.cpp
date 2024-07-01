class Solution {
public:
int fn(vector<int>&nums,int i,vector<int>&dp){
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1)return dp[i];
    int take=nums[i] +fn(nums,i+2,dp);
    int nottake=fn(nums,i+1,dp);
    dp[i]= max(take,nottake);
    return dp[i];
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return fn(nums,0,dp);
    }
};