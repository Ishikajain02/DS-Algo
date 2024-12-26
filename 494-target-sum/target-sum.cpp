class Solution {
public:
void fn(vector<int>&nums,int i,int target,int&ans,int sum){
 if(sum==target && i==nums.size()){
    ans++;
    return;}
    if(i>=nums.size())return;
    fn(nums,i+1,target,ans,sum+nums[i]);
    fn(nums,i+1,target,ans,sum-nums[i]);
    return;

}
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        fn(nums,0,target,ans,0);
        return ans;

    }
};