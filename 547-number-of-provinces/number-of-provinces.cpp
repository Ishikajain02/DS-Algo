class Solution {
public:
    void travel(vector<vector<int>>&adj,vector<bool>&visited,int val){
        visited[val]=true;
        for(int i=0;i<adj[val].size();i++){
            if(!visited[adj[val][i]])travel(adj,visited,adj[val][i]);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
     int ans=0;
     vector<vector<int>>adj(isConnected.size());
     int n=isConnected.size();
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
     }
     vector<bool>visited(isConnected.size(),false);
     for(int i=0;i<isConnected.size();i++){
       if(!visited[i]){
         ans++;
         travel(adj,visited,i);
       }
     }
     return ans;
    }
};