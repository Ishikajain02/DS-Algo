class Solution {
public:
    int fn(vector<int>&nums,int in,int ans){
        if(in==nums.size())return ans;
        int element=fn(nums,in+1,ans^nums[in]);
        int without=fn(nums,in+1,ans);
        return element+without;
    }
    int subsetXORSum(vector<int>& nums) {
        //subset take it or not
        return fn(nums,0,0);

    }
};