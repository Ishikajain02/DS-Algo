class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left =0;
        int right = nums.size()-1;
        int minp= INT_MIN;
        while(left<right){
            int curr = nums[left]+nums[right];
           minp = max(curr,minp);
           left++;
           right--;
        }
        return minp;
    }
};