class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>>grid(n,vector<int>(n,0));
        int k=0;
        for(int i=0;i<n;i++){
            for(int  j=0;j<n;j++){
            grid[i][j]=k;
            k++;
            }
        }
        int val=0;
        int i=0,j=0;
        for(int k=0;k<commands.size();k++){
            
            if(commands[k]=="UP"){
                if(i>0){
                    val=grid[i-1][j];
                    i--;
                }
                cout<<val<<endl;
            }
            if(commands[k]=="DOWN"){
                if(i<n-1){
                    val=grid[i+1][j];
                    i++;
                }
                cout<<val<<endl;
            }
            if(commands[k]=="RIGHT"){
                if(j<n-1){
                    val=grid[i][j+1];
                    j++;
                }
                cout<<val<<endl;
            }
            if(commands[k]=="LEFT"){
                if(j>0){
                    val=grid[i][j-1];
                    j--;
                }
                cout<<val<<endl;
            }
        }
        return val;
    }
};