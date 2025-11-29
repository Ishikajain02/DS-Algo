class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     //sum is divisible by k sum%k==0;
     int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum%k;
    }
};