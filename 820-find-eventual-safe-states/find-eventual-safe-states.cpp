class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //using kahn's algorithm
        vector<vector<int>>adj(graph.size());
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                adj[graph[i][j]].push_back(i);
            }
        }
        queue<int>q;
        vector<int>indegree(graph.size(),0);
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }
        for(int i=0;i<graph.size();i++){
            if(indegree[i]==0)q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            ans.push_back(top);
            for(int i=0;i<adj[top].size();i++){
                indegree[adj[top][i]]--;
                if(indegree[adj[top][i]]==0)q.push(adj[top][i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};