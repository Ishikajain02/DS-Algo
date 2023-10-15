class Solution {
public:
int fn(vector<int>&nums, vector<vector<int>>&dp , int ind , int prev,int n){
  if(ind==n)return 0;
  if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
  int left = 0+ fn(nums,dp,ind+1,prev,n);
  if(prev==-1 || nums[ind]>nums[prev]){int right = 1+ fn(nums,dp,ind+1,ind,n);
  left = max(right,left);
  }
  return dp[ind][prev+1]=left;
}
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        for(int ind = n-1;ind>=0;ind--){
            for(int prev = ind-1;prev>=-1;prev--){
                 int left = 0+ fn(nums,dp,ind+1,prev,n);
                          if(prev==-1 || nums[ind]>nums[prev]){int right = 1+ fn  (nums,dp,ind+1,ind,n);
  left = max(right,left);
  }
     dp[ind][prev+1]=left;
            }
        }
        
        return dp[0][0];
    }
};