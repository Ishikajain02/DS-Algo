class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        //simply by making two maps for counting the number of values
        map<int,int>mp1,mp2;
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int key=queries[i][0];
            int val=queries[i][1];
            if(mp1.find(key)!=mp1.end()){
               int value=mp1[key];
                if(mp2[value]==1)mp2.erase(value);
                else mp2[value]--;
                mp1[key]=val;
            }
            else{
                mp1[key]=val;
            }
            mp2[val]++;
            ans.push_back(mp2.size());
        }
        return ans;
    }
};