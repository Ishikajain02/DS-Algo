class Solution {
public:
    int row,col; // Variables to store the number of rows and columns in the matrix.

    // Function to check if a cell is at the corner of the matrix.
    inline bool isCorner(int i,int j){return (i==0 || j==0 || i==row-1 || j==col-1);}

    // Depth-First Search (DFS) function to mark 'O' cells connected to the border as 'N'.
    void dfs(int i,int j,vector<vector<char>>&mat){

        // Base case: If the cell is out of bounds, return.
        if(i<0 || j<0 || i>=row || j>=col) {return;}

        // If the cell is 'O', mark it as 'N' and explore its neighbors.
        if(mat[i][j]=='O') {mat[i][j]='N';}
        else {return;}

        dfs(i+1,j,mat); // Explore down.
        dfs(i-1,j,mat); // Explore up.
        dfs(i,j+1,mat); // Explore right.
        dfs(i,j-1,mat); // Explore left.
    }

    // Main function to solve the problem.
    void solve(vector<vector<char>>& mat) {
        row=mat.size(); // Get the number of rows in the matrix.
        col=mat[0].size(); // Get the number of columns in the matrix.
        
        // Iterate through the matrix to find 'O' cells at the border and start DFS.
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]=='O' && isCorner(i,j)){
                    dfs(i,j,mat);
                }
            }
        }

        // Final pass to update 'O' cells to 'X' and 'N' cells back to 'O'.
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] =='O') mat[i][j]='X';
                else if(mat[i][j] =='N') mat[i][j]='O';
            }
        }
    }
};