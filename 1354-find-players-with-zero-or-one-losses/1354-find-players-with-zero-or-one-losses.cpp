class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        vector<int>s;
        unordered_map<int ,int>winner;
         unordered_map<int ,int>loser;
         for(int i=0;i<matches.size();i++){
             winner[matches[i][0]]++;
         }
         for(int i=0;i<matches.size();i++){
             loser[matches[i][1]]++;
         }
         for(auto &it:winner){
             int j = it.first;
             if(loser.find(it.first)==loser.end())s.push_back(j);

         }
         sort(s.begin(),s.end());
         ans.push_back(s);
         s.clear();
         for(auto &it:loser){
         if(it.second==1)s.push_back(it.first);
         }
         sort(s.begin(),s.end());
         ans.push_back(s);
         return ans;

    }
};