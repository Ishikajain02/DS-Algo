class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<trust.size();i++){
            s.insert(trust[i][0]);
            mp[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(s.count(i))continue;
            else {
                if(mp[i]==n-1){
                    return i;
                }
            }
        }
    
        return -1;
    }
};