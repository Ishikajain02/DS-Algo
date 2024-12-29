class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int ans=0;
     //   if()
     cout<<grid.size()<<grid[0].size()<<endl;
        for(int i=0;i<grid[0].size();i++){
           for(int j=1;j<grid.size();j++){
            if(grid[j][i]>grid[j-1][i])continue;
            ans+=((grid[j-1][i]+1)-grid[j][i]);
            grid[j][i]=grid[j-1][i]+1;
            cout<<i<<j<<endl;
           }
        }
        return ans;
    }
};