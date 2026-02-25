class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            int no=__builtin_popcount(arr[i]);
            mp[no].push_back(arr[i]);
        }
        vector<int>ans;
        for(auto it:mp){
            sort(it.second.begin(),it.second.end());
            for(int i=0;i<it.second.size();i++){
                ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};