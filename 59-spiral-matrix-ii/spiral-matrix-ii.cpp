class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int h=1;
        int row=n-1;
        int col=n-1;
        int left=0,right=col;
        int top=0,bottom=col;
        vector<vector<int>>vc(row+1,vector<int>(col+1,0));
        while(left<=right && top<=bottom){
           for(int i=left;i<=right;i++){
            vc[top][i]=h;
            h++;
           }
           top++;
           for(int i=top;i<=bottom;i++){
            vc[i][right]=h;
            h++;
           }
           right--;
           if(top<=bottom){
           for(int i=right;i>=left;i--){
            vc[bottom][i]=h;
            h++;
           }
           }
           bottom--;
           if(left<=right){
           for(int i=bottom;i>=top;i--){
            vc[i][left]=h;
            h++;
           }
           }

           left++;
        }
        return vc;
    }
};