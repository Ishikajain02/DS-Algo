class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        if(n==1)return {0};
        if(n==2)return {0,1};
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==1)q.push(i);
        }
        int ss=n;
        while(ss>2 && !q.empty()){
            int size=q.size();
            while(size--){
           int top=q.front();
           q.pop();
           ss--;

           for(int i=0;i<adj[top].size();i++){
            indegree[top]--;
            indegree[adj[top][i]]--;
            if(indegree[adj[top][i]]==1)q.push(adj[top][i]);
           }
            }
        }
        vector<int>ans;
         while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
         }
         return ans;
    }
};