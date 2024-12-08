class Solution {
public:
bool dfs(int n,vector<vector<int>>&adj,vector<int>&color,int src,int clr){
    color[src]=clr;
    for(int i=0;i<adj[src].size();i++){
        if(color[adj[src][i]]==-1 && !dfs(n,adj,color,adj[src][i],!clr))return false;
        if(color[adj[src][i]]==clr)return false;
    }
    return true;
}
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n);
       for (const auto& pair : dislikes) {
            adj[pair[0] - 1].push_back(pair[1] - 1);  // Add edge from pair[0] to pair[1]
            adj[pair[1] - 1].push_back(pair[0] - 1);  // Add edge from pair[1] to pair[0]
        }
 vector<int>color(n,-1);
    for(int i=0;i<n;i++){
     if(color[i]==-1 && !dfs(n,adj,color,i,0))return false;
    }
    return true;       
    }
};