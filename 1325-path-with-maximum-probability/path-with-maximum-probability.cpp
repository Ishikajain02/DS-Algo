class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<double,double>>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double>dist(n,0);
        priority_queue<pair<double,int>>pq;
        pq.push({1.0,start_node});
        while(!pq.empty()){
            int ele=pq.top().second;
            double d=pq.top().first;
            pq.pop();
            for(int i=0;i<adj[ele].size();i++){
                if(dist[adj[ele][i].first]<adj[ele][i].second*d){
                    dist[adj[ele][i].first]=adj[ele][i].second*d;
                    pq.push({adj[ele][i].second*d,adj[ele][i].first});
                }
            }
        }
        return dist[end_node];
    }
};