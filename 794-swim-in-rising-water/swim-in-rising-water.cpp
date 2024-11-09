class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int t=0;
        vector<vector<int>>dist(m,vector<int>(n,0));
        dist[0][0]=1;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>>pq;
        pq.push({grid[0][0],{0,0}});
        vector<vector<int>>w(m,vector<int>(n,INT_MAX));
        w[0][0]=grid[0][0];
        while(!pq.empty()){
         int d=pq.top().first;
         int i=pq.top().second.first;
         int j=pq.top().second.second;
         pq.pop();
         if(i==m-1 && j==m-1)return w[i][j];
         vector<int>dx={0,-1,0,1};
         vector<int>dy={1,0,-1,0};
         for(int k=0;k<4;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(x<m && x>=0 && y>=0 && y<n){
                if(dist[x][y]==0 ){
                    if(w[x][y]>max(grid[x][y],d)){
                        w[x][y]=max(grid[x][y],d);
                        dist[x][y]=1;
                        pq.push({w[x][y],{x,y}});
                    }

                }
            }
         }
        }
        return -1;
    }
};