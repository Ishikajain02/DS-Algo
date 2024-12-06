class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        //count the total no of ones and  cnt the number of ones connected components and subtract it
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            
                if(grid[i][0]==1){
                    q.push({i,0});
                    grid[i][0]=0;
                }
            
        }
   for(int i=0;i<n;i++){
            
                if(grid[i][m-1]==1){
                    q.push({i,m-1});
                    grid[i][m-1]=0;
                }
            
        }
        for(int i=0;i<m;i++){
            
                if(grid[0][i]==1){
                    q.push({0,i});
                    grid[0][i]=0;
                }
            
        }
        for(int i=0;i<m;i++){
            
                if(grid[n-1][i]==1){
                    q.push({n-1,i});
                    grid[n-1][i]=0;
                }
            
        }
    
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                if(x+1<n && grid[x+1][y]==1){
                    grid[x+1][y]=0;
                    q.push({x+1,y});
                }
                  if(x-1>=0 && grid[x-1][y]==1){
                    grid[x-1][y]=0;
                    q.push({x-1,y});
                }
                  if(y+1<m && grid[x][y+1]==1){
                    grid[x][y+1]=0;
                    q.push({x,y+1});
                }
                  if(y-1>=0 && grid[x][y-1]==1){
                    grid[x][y-1]=0;
                    q.push({x,y-1});
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)ans++;
            }
        }
        return ans;
    }
};