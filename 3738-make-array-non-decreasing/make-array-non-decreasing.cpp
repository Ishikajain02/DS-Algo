class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        //choose the maximum element and iterateto its left and right and increasethe cunt if element<=maxi;
       //simple approach
       int cnt=0;
       int maxi=nums[0];
       for(int i=1;i<nums.size();i++){
        if(nums[i]<maxi)cnt++;
        else maxi=nums[i];
       }
       return nums.size()-cnt;
    }
};