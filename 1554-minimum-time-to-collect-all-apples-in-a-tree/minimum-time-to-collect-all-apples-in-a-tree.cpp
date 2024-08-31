class Solution {
public:
int dist(int s,vector<vector<int>>&adj,vector<bool>&hasApple,int parent){
    int dis=0;
 for(int i=0;i<adj[s].size();i++){
    if(adj[s][i]==parent)continue;
    dis+=dist(adj[s][i],adj,hasApple,s);
   
 }
 if(s==0)return dis;
  if(dis>0 || hasApple[s]){
        return dis+1;
    }
 return dis;

}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        //2*path
      int dis=0;
    return 2*dist(0,adj,hasApple,-1);           
        //dfs

    }
};