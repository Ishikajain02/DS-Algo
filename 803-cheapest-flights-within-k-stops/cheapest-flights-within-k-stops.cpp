class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        //adjacency list
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }

        //k stops
        queue<pair<int,pair<int,int>>>q;
        vector<int>dist(adj.size(),INT_MAX);
        dist[src]=0;
        q.push({0,{src,0}});
        while(!q.empty()){
            int stop=q.front().first;
            int d=q.front().second.second;
            int node=q.front().second.first;
            q.pop();
            if(stop>k)continue;
            for(int i=0;i<adj[node].size();i++){
                if(dist[adj[node][i].first]>adj[node][i].second+d  ){//
                dist[adj[node][i].first]=adj[node][i].second+d;
                q.push({stop+1,{adj[node][i].first,adj[node][i].second+d}});
                }
            }
        }
        if(dist[dst]==INT_MAX)return -1;
        return dist[dst];
    }
};