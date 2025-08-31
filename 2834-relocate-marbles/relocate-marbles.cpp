class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=nums[i];
        }
        for(int i=0;i<moveFrom.size();i++){
          //  mp[moveFrome[i]]=moveTo[i];
            mp.erase(mp[moveFrom[i]]);
            mp[moveTo[i]]=moveTo[i];
        }
        vector<int>ans;
        for(auto it:mp)ans.push_back(it.first);
        return ans;
    }
};