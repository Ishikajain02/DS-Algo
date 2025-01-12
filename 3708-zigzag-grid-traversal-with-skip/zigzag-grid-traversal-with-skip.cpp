class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        bool alt=false;
        for(int i=0;i<grid.size();i++){
        if(!alt){
            for(int j=0;j<grid[0].size();j++){
                if(j%2==0)ans.push_back(grid[i][j]);
            }
            alt=true;
        }
        else{
            for(int j=grid[0].size()-1;j>=0;j--){
                if(j%2!=0)ans.push_back(grid[i][j]);
            }
            alt=false;
        }

        }
        return ans;
    }
};