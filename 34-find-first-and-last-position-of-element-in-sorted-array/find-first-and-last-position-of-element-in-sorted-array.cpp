class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //O(N) would easily do that
        int left=0,right=nums.size()-1;
        while(left<=right){
            if(nums[left]==target && nums[right]==target){
                return {left,right};
            }
            else if(nums[left]<target){
               left++;
            }
            else if(nums[right]>target){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return {-1,-1};
    }
};