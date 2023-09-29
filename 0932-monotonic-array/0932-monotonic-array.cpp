class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     bool one = false;
     bool two = false;
     for(int i=1;i<nums.size();i++){
         if(nums[i]<nums[i-1])one =  true;
         if(nums[i]>nums[i-1])two =  true;
         if(one && two) return false;
     }
     return true;
    }
};