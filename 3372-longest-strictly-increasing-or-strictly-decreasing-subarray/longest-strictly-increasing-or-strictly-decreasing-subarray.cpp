class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len=1;
        int maxi=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                len++;
                maxi=max(maxi,len);
            }
            else len=1;
        }
        len=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
              len++;
              maxi=max(maxi,len);
            }
            else len=1;
        }
        return maxi;
    }
};