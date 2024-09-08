class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        //jump to that index such that nums[j]>nums[i]
        int i=0,j=0;
        long long ans=0;
        while(j<nums.size()){
            if(nums[j]>nums[i]){
                ans+=(j-i)*(long long)nums[i];
                i=j;
            }
            j++;
        }
        if(i!=nums.size()-1){
            ans+=(j-i-1)*(long long)nums[i];
        }
        return ans;
    }
};