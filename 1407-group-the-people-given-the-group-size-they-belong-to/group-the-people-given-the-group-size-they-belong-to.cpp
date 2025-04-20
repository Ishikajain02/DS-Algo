class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        //grouping
        vector<vector<int>>ans;
        int n=groupSizes.size();
   //     vector<int\>group(n+1,0);
        vector<vector<int>>group(n+1);
        for(int i=0;i<n;i++){
          group[groupSizes[i]].push_back(i);
          if(group[groupSizes[i]].size()==groupSizes[i]){
            ans.push_back(group[groupSizes[i]]);
            group[groupSizes[i]].clear();
          }
            
        }
        return ans;
    }
};