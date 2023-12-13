class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<int>onerow(n,0);
        vector<int>onecol(m,0);
        vector<int>zerorow(n,0);
        vector<int>zerocol(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    zerorow[i]++;
                    zerocol[j]++;
                }
                onerow[i]+=grid[i][j];
                onecol[j]+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=onerow[i]+onecol[j]-zerorow[i]-zerocol[j];
            }
        }
        return ans;        
           }
};