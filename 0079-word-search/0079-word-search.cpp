class Solution {
public:
bool find(int i, int j,int ind,vector<vector<char>>& board , string word ){
    if(ind==word.size())return true;
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='#')return false;
 if(board[i][j]!= word[ind])return false;
 char ch= board[i][j];
 board[i][j]='#';
  if(find(i+1,j,ind+1,board,word))return true;
  if(find(i-1,j,ind+1,board,word))return true;
  if(find(i,j-1,ind+1,board,word))return true;
  if(find(i,j+1,ind+1,board,word))return true;
  board[i][j]=ch;
return false; 

}
    bool exist(vector<vector<char>>& board, string word) {
       // stack<char>s;
       // reverse(word.begin(),word.end());
        for(int i=0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
               if(find(i,j,0,board,word))return true;
            }      
        }
      
        return false;
    }
};
