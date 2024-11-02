class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<times.size();i++){
            adj[times[i][0]-1].push_back({times[i][1]-1,times[i][2]});
        }
        vector<int>dist(n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k-1});
        dist[k-1]=0;
        while(!pq.empty()){
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            for(auto it:adj[node]){
                if(dist[it.first]>d+it.second){
                    dist[it.first]=d+it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        //find max;
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX)return -1;
        }
        int ans=-1;
        for(int i=0;i<n;i++)cout<<dist[i]<<" ";
        for(int i=0;i<n;i++){
            if(i==k-1)continue;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};