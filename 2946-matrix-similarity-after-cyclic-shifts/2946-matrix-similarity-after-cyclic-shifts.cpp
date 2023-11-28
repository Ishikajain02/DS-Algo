class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int row= mat.size();
        int col= mat[0].size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                int newi = (j+k+col)%col;
                if(mat[i][newi]!=mat[i][j])return false;
            }
        }
        return true;
    }
};