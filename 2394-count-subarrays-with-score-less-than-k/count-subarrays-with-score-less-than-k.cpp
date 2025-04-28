class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        //number of subarray les than k/length
    long long sum=0;
        int left=0;
        long long ans=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            int len=right-left+1;
            while(sum*len>=(k)){
                sum-=nums[left];
                left++;
                len--;
            }
            ans+=right-left+1;
        }
        return ans;
    }
};