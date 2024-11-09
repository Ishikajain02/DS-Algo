class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        sort(nums.begin(),nums.end());//sorting the array first
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
       for(int i=nums[0];i<=nums.back();i++){
        int a=lower_bound(nums.begin(),nums.end(),i-k)-nums.begin();
        int b=upper_bound(nums.begin(),nums.end(),i+k)-nums.begin();
        b--;
        //adjusting b for values<=i+k not beyond that
        ans=max(ans,mp[i]+min(b-a-mp[i]+1,numOperations));
       }
       return ans;
    }
};