class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(maxi<mp[nums[i]])maxi = mp[nums[i]];
        }
        vector<vector<int>>f;
        while(maxi--){
            vector<int>ans;
            for(auto &it:mp){
              //  if(it.second==0)mp.erase(it.first);
                if(it.second>0){
                 ans.push_back(it.first);
                // mp.erase(it.first);
                
                
                   // ans.push_back(it.first);
                    mp[it.first]--;
                }
            }
            
            f.push_back(ans);
        }
        return f;
    }
};