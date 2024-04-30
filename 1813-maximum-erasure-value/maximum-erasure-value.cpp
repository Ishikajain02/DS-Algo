class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int left=0,maxi=0,sum=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            sum+=nums[right];
            while(mp[nums[right]]>1){
                mp[nums[left]]--;
                sum-=nums[left];
                left++;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};