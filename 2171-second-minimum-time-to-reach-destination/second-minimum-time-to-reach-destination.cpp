class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]-1].push_back(edges[i][1]-1);
            adj[edges[i][1]-1].push_back(edges[i][0]-1);
        }
        vector<int>dist1(n,INT_MAX);
        vector<int>dist2(n,INT_MAX);
        dist1[0]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(node==n-1 && dist2[node]!=INT_MAX)return dist2[n-1];
            int times=d/change;
            if(times%2!=0){
                d=change*(times+1);
            }
            for(int i=0;i<adj[node].size();i++){
                if(dist1[adj[node][i]]>d+time ){
                   dist2[adj[node][i]]=dist1[adj[node][i]];
                   pq.push({d+time,adj[node][i]});
                    dist1[adj[node][i]]=d+time;
                }

                else if(dist2[adj[node][i]]>d+time &&dist1[adj[node][i]]!=d+time ){
                    dist2[adj[node][i]]=d+time;
                    pq.push({d+time,adj[node][i]});
                }
            }
        }
        return dist2[n-1];
    }
};