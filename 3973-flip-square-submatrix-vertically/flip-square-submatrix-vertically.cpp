class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>>vc=grid;
        int rev=x+k-1;
        int revy=y+k-1;
        int temp=rev;
        for(int i=x;i<x+k;i++){
              
              
            for(int j=y;j<y+k;j++){
                  
                  
                    vc[i][j]=grid[temp][j];
                  
            }
            temp--;
        }
        return vc;
    }
};