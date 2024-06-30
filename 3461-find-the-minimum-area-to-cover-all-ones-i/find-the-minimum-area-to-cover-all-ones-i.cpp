class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minirow=INT_MAX,maxirow=INT_MIN;
        int minicol=INT_MAX,maxicol=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                minirow=min(minirow,i);
                maxirow=max(i,maxirow);
                minicol=min(j,minicol);
                maxicol=max(j,maxicol);
            }
            }
        }
        int area=((maxirow-minirow)+1)*((maxicol-minicol)+1);
        return area;
    }
};