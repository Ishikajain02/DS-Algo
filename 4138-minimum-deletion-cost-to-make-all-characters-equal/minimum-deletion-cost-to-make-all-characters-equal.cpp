class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long total=0;
        map<char,long long>mp;
        for(int i=0;i<cost.size();i++){
            mp[s[i]]+=cost[i];
            total+=cost[i];
        }
        long long ans=LONG_MAX;
        for(auto it:mp){
            ans=min(1LL*(total-it.second),ans);
        }
        return ans;

    }
};