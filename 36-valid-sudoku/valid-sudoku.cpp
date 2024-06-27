class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        int count=0;
        for(int i=0;i<9;i++){
            //Rule No. 1
            //checking the row in which the char is placed
            if(board[row][i]==c){
                count+=1;
            }
            //Rule No. 2
            //checking the column in which the char is placed
            if(board[i][col]==c){
                count+=1;
            }
            //Rule No. 3
            //checking the 3x3 matrix in which the char is placed
            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == c){
                count+=1;
            }
        }
        if(count>3){
            return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    if(!isValid(board, i, j, board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};