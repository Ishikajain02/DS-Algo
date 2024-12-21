class Solution {
public:
 int mod=1e9+7;
  int s(vector<vector<int>>&grid,int &k,int &ans,int i,int j,int &m,int&n,int xr,vector<vector<vector<int>>>&vc){
      if(i==0 && j==0 ){
          if(xr==k){
              
              return 1;
          }
          return 0;
      }
      if(vc[i][j][xr]!=-1)return vc[i][j][xr];
      int right=0,left=0;
      if(i-1>=0){
        right=s(grid,k,ans,i-1,j,m,n,xr^grid[i-1][j],vc);
      }
      if(j-1>=0){
       left= s(grid,k,ans,i,j-1,m,n,xr^grid[i][j-1],vc);
      }
      return vc[i][j][xr]=(left+right)%mod;
  }
    int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
        //usig dp for brute force
      //  vector<vector<int>>vc(grid.size(),vector<int>(grid[0].size(),-1)){
            int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>vc(n,vector<vector<int>>(m,vector<int>(16,-1)));
        
           return s(grid,k,ans,n-1,m-1,m,n,grid[n-1][m-1],vc);
      //  return ans;
        
    }
};