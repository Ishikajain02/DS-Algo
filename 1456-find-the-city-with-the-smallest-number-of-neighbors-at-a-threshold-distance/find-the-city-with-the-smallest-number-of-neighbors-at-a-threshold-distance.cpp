class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        //dijikstra
        //vector containg vertex and count
        vector<vector<int>>adj(n,vector<int>(n,0));
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<3;j++){
                adj[edges[i][1]][edges[i][0]]=edges[i][2];
                adj[edges[i][0]][edges[i][1]]=edges[i][2];
            }
        }

        int cityvalue=INT_MAX,city=-1;
        for(int i=0;i<n;i++){
           vector<int>weight(n,INT_MAX);
           priority_queue<pair<int,int>>pq;
           pq.push({0,i});
           weight[i]=0;
           while(!pq.empty()){
            int index=pq.top().second;
            pq.pop();
            for(int j=0;j<n;j++){
                if(adj[index][j]>0 && adj[index][j]+weight[index]<weight[j]){
                    weight[j]=adj[index][j]+weight[index];
                    pq.push({weight[j],j});
                }
            }
           }
           int reach=0;
           for(int k=0;k<n;k++){
            if(weight[k]<=distanceThreshold)reach++;
           }
           if(reach<=cityvalue){
            cityvalue=reach;
            city=i;
           }

        }
        return city;
    }
};