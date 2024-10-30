class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //using kahn's algorithm
        queue<int>q;
        vector<int>indegree(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>ans;
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int top=q.front();
            q.pop();
            ans.push_back(top);
            for(int i=0;i<adj[top].size();i++){
                indegree[adj[top][i]]--;
                if(indegree[adj[top][i]]==0)q.push(adj[top][i]);
            }
        }
        if(ans.size()!=numCourses)return {};
        return ans;
    }
};