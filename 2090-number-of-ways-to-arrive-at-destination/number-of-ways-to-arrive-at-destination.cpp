class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
       //calculate the shortest distance first 
       //then check all the ways
       int mod=1e9+7;
       vector<vector<pair<long long,long long>>>adj(n);
       for(int i=0;i<roads.size();i++){
          adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
          adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
       }
        vector<long long>dist(n,LONG_MAX);
        dist[0]=0;
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        pq.push({0,0});
        vector<long long>ways(n,0);
        ways[0]=1;
        while(!pq.empty()){
            long long d=pq.top().first;
            long long node=pq.top().second;
            pq.pop();
            for(int i=0;i<adj[node].size();i++){
                long long first=adj[node][i].first;
                long long second=adj[node][i].second;
                if(dist[first]>second+d){
                   ways[first]=ways[node];
                    dist[first]=second+d;
                    pq.push({dist[first],first});
                }
                else if(dist[adj[node][i].first]==adj[node][i].second+d){
                            ways[adj[node][i].first]=( ways[adj[node][i].first]+ways[node])%mod;
                   
                }
            }
        }
        return ways[n-1]%mod;
    }
};