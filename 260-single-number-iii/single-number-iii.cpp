class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        long xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr^=nums[i];
        }
      
        int mask=xorr& -xorr;
        int nums1=0,nums2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&mask){
                nums1^=nums[i];
            }
            else nums2^=nums[i];
        }
        return {nums1,nums2};
    }
};