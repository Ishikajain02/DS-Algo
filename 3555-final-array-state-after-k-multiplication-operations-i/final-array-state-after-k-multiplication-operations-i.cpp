class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        //brute force
        while(k--){
            int mini=INT_MAX;
            int ind=-1;
            for(int i=0;i<nums.size();i++){
               if(mini>nums[i]){
                 mini=min(mini,nums[i]);
                 ind=i;
               }
            }
            nums[ind]=nums[ind]*multiplier;

        }
        return nums;
    }
};