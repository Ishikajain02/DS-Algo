class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        //maximum - minimum
        //locate the 
        long long mini=nums[0],maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            mini=min(mini,1LL*nums[i]);
            maxi=max(maxi,1LL*nums[i]);
        }
        return (maxi-mini)*k;
    }
};