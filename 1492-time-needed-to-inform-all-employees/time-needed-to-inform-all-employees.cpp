class Solution {
public:
 void travel(int &ans,int s,vector<bool>&visited,vector<int>&informTime,vector<vector<int>>&adj,int cuurtime){
    ans=max(ans,cuurtime+informTime[s]);
    //visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        if(!visited[adj[s][i]]){
            travel(ans,adj[s][i],visited,informTime,adj,cuurtime+informTime[s]);
        }
    }
 }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        //simple bfs traversal or dfs
        vector<vector<int>>adj(manager.size());
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)
            adj[manager[i]].push_back(i);
        }
        vector<bool>visited(manager.size(),false);
       // visited[haedId]=true;
       int ans=0;
        travel(ans,headID,visited,informTime,adj,0);
        return ans;
    }
};