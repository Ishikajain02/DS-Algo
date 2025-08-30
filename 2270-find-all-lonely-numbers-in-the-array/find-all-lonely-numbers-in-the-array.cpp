class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int di=nums[i]+1;
            int le=nums[i]-1;
            if(mp.find(di)==mp.end() && mp.find(le)==mp.end() && mp[nums[i]]<=1)ans.push_back(nums[i]);
        }
        return ans;
    }
};