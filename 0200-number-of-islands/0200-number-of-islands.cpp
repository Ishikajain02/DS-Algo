class Solution {
public:
void ans(int i , int j, vector<vector<char>> &grid){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0'){
        return;
    }
    if(grid[i][j]=='1'){
        grid[i][j]=0;
        ans(i-1,j,grid);
        ans(i+1,j,grid);
        
        ans(i,j+1,grid);
        ans(i,j-1,grid);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    
                    ans(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};