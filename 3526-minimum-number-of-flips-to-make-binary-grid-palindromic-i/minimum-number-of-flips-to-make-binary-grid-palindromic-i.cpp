class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        //first check horizontally then vertically
        int ans1=0,ans2=0;
        int n1=grid.size();
        int n2=grid[0].size();
        for(int row=0;row<n1;row++){
            int i1=0,j1=n2-1;
            while(i1<=j1){
                if(grid[row][i1]!=grid[row][j1]){
                    ans1++;
                }
                i1++;
                j1--;
            }
        }
        for(int col=0;col<n2;col++){
            int i2=0,j2=n1-1;
            while(i2<=j2){
                if(grid[i2][col]!=grid[j2][col]){
                    ans2++;
                }
                j2--;
                i2++;
            }
        }
        return min(ans1,ans2);
    }
};