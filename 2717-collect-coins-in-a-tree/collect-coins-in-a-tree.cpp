class Solution {
public:
    int collectTheCoins(vector<int>& coins, vector<vector<int>>& edges) {
        //count the remaining nodes -1 edges *2 
        //remaining code is same as minimum height trees
        if(coins.size()<=2)return 0;
        //if(edges.size()<=2)return 0;
        int n=coins.size();
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==1 && coins[i]==0)q.push(i);
        }
        while(!q.empty()){

         int top=q.front();
         q.pop();
         for(int i=0;i<adj[top].size();i++){
            indegree[adj[top][i]]--;
             indegree[top]--;
        if(indegree[adj[top][i]]==1 && coins[adj[top][i]]==0)q.push(adj[top][i]);
    }

        }
       //all leaf nodes are removed
       for(int i=0;i<n;i++){
        if(indegree[i]==1 && coins[i]==1)q.push(i);
       }
    for(int i=0;i<2 ;i++){
      int size=q.size();
      while(size--){
        int top=q.front();
        q.pop();
        for(int i=0;i<adj[top].size();i++){
            indegree[adj[top][i]]--;
            indegree[top]--;
            if(indegree[adj[top][i]]==1 )q.push(adj[top][i]);
        }
      }
    }
 int remainingNodes = 0;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] > 0) remainingNodes++;
        }
      if(remainingNodes<=0)return 0;
        return 2 * (remainingNodes - 1);
    }
};