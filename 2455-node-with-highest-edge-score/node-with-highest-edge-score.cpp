class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<long ,long>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i]]+=i;
        }
        int val=-1,high=INT_MIN;
        for(auto it:mp){
            if(it.second>high){
                val=it.first;
                high=it.second;
            }
        }
        return val;
    }
};