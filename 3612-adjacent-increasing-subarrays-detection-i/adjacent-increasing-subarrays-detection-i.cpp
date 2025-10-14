class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        //two increasing subarrays
        int len=0;
        int ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i])ans++;
            else{
                len=ans;
                ans=1;
            }
             if(ans>=2*k || (len>=k && ans>=k))return true;
        }
       
       
        return false;
    }
};