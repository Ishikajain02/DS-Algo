class Solution {
public:
  int recurr(int i,vector<int>&nums,int j,vector<vector<int>>&vc){
    if(i>=nums.size() )return 0;
    int take=0;
    if(vc[i][j+1]!=-1)return vc[i][j+1];
    if( j==-1 || nums[i]>nums[j]){
        take=1+recurr(i+1,nums,i,vc);
    }
    int nottake=recurr(i+1,nums,j,vc);
    return vc[i][j+1]= max(take,nottake);
  }
    int lengthOfLIS(vector<int>& nums) {
       //lis
       //recursion take it or leave it
       //memoise it
       vector<vector<int>>vc(nums.size(),vector<int>(nums.size()+1,-1));
       
       return recurr(0,nums,-1,vc);
    }
};