class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        auto smidx=upper_bound(nums.begin(),nums.end(),target);
        auto lgidx=lower_bound(nums.begin(),nums.end(),target);
        vector<int>ans;
      //  if(smidx ==-1 && lgidx==-1)return ans;
        for(auto i=lgidx-nums.begin();i<smidx-nums.begin();i++)ans.push_back(i);
        return ans;
    }
};