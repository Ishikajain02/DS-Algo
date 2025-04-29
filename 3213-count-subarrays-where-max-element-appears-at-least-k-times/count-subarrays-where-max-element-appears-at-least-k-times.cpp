class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        //appear at  least k times
        int maxi=*max_element(nums.begin(),nums.end());
        int cnt=0;
        int left=0;
        long long ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==maxi)cnt++;
            while(cnt>=k){
                ans+=nums.size()-right;
                if(nums[left]==maxi)cnt--;
                left++;
            }
        }
        return ans;
    }
};