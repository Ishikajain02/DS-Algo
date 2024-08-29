class Solution {
public:
  void travel(vector<bool>&visited,vector<vector<int>>&adj,int s){
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        if(!visited[adj[s][i]]){
            travel(visited,adj,adj[s][i]);
        }
    }
  }
    int removeStones(vector<vector<int>>& stones) {
        //count no of connected componenets
        vector<vector<int>>adj(stones.size());
        for(int i=0;i<stones.size();i++){
            for(int j=i+1;j<stones.size();j++){
                if(stones[i][0]==stones[j][0]|| stones[j][1]==stones[i][1]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        //adj list got ready
        int cnt=0;
        vector<bool>visited(stones.size(),false);
       for(int i=0;i<stones.size();i++){
        if(!visited[i]){
            cnt++;
            travel(visited,adj,i);
        }
       }
       return stones.size()-cnt;
    }
};