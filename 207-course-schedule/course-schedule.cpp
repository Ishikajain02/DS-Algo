class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //prerequisites are opposite
      //  vector<vector<int>>adj(prerequi)
        //cycle present in topologoical graph
      //using recurr  stack for dfs
      //kahn is easy in implementation though using that one

      vector<vector<int>>adj(numCourses);
      for(int i=0;i<prerequisites.size();i++){
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
      }
      vector<int>indegree(numCourses,0);
    for(int i=0;i<prerequisites.size();i++){
        indegree[prerequisites[i][0]]++;
    }
    queue<int>q;
    for(int i=0;i<numCourses;i++){
        if(indegree[i]==0)q.push(i);
    }
    int cnt=0;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        cnt++;
        for(int i=0;i<adj[top].size();i++){
            indegree[adj[top][i]]--;
            if(indegree[adj[top][i]]==0)q.push(adj[top][i]);
        }
    }
    if(cnt==numCourses)return true;
    return false;
    }
};