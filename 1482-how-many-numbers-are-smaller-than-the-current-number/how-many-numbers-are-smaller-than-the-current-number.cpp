class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>vc;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
           int ans=0;
            for(auto it:mp){
                if(it.first<nums[i]){
                    ans+=it.second;
                }
            }
            vc.push_back(ans);
        }
        return vc;
    }
};