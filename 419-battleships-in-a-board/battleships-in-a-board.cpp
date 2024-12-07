class Solution {
public:
void vis(vector<vector<char>>&board,int i,int j,int n,int m){
    
if(i+1<n && board[i+1][j]=='X'){
   board[i+1][j]='.';
   vis(board,i+1,j,n,m);
}
if(j+1<m && board[i][j+1]=='X'){
   board[i][j+1]='.';
   vis(board,i,j+1,n,m);
}
if(i-1>=0 && board[i-1][j]=='X'){
   board[i-1][j]='.';
   vis(board,i-1,j,n,m);
}
if(j-1>=0 && board[i][j-1]=='X'){
   board[i][j-1]='.';
   vis(board,i,j-1,n,m);
}

}
    int countBattleships(vector<vector<char>>& board) {
        //just simply count the number of components present in simplar terms
        int n=board.size();
        int m=board[0].size();
        int cnt=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<board[i].size();j++){
        if(board[i][j]=='X'){
            board[i][j]='.';
            cnt++;
            vis(board,i,j,n,m);

        }
    }
  }
  return cnt;
    }
};