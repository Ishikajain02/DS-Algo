class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int idx=-1;
      int left=0,right=nums.size()-1;
      while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]>=target){
            idx=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
      }
      if(idx==-1)return nums.size();
      else return idx;  
    }
};