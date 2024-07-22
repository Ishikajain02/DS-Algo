class Solution {
public:
    void dfs(vector<bool>&vis,int i,vector<vector<int>>&adj){
        vis[i]=true;
        for(int j=0;j<adj[i].size();j++){
            if(!vis[adj[i][j]])dfs(vis,adj[i][j],adj);
        }
        return;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        int count=0;
        vector<vector<int>>adj(n);
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
         if(!vis[i]){
            dfs(vis,i,adj);
            count++;
         }
        }
        return count-1;
    }
};