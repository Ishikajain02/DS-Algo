class Solution {
public:
void traverse(vector<vector<int>>&adj,vector<bool>&visited,int val,int &edge,int &nodes){
    
    visited[val]=true;
    nodes++;
    for(int i=0;i<adj[val].size();i++){
        edge++;
        if(!visited[adj[val][i]]) {
           //  nodes++;
            traverse(adj,visited,adj[val][i],edge,nodes);
           
        }
      
    }
}
//complete component
//that has a cycle like nodes*nodes-1/2;
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        int cnt=0;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
             int edge=0,nodes=0;
            if(visited[i]==false){
               
                traverse(adj,visited,i,edge,nodes);
                if(edge==((nodes*(nodes-1))))cnt++;
                
            }
        }
        return cnt;
    }
};