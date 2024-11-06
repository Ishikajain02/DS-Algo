class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,INT_MAX));
        queue<pair<int,int>>q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){ans[i][j]=0;
                q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i+1<m && ans[i+1][j]>ans[i][j]+1){
                ans[i+1][j]=ans[i][j]+1;
                q.push({i+1,j});
            }
            if(j+1<n && ans[i][j+1]>ans[i][j]+1){
                ans[i][j+1]=ans[i][j]+1;
                q.push({i,j+1});
            }
            if(i-1>=0 && ans[i-1][j]>ans[i][j]+1){
                ans[i-1][j]=ans[i][j]+1;
                q.push({i-1,j});
            }
            if(j-1>=0 && ans[i][j-1]>ans[i][j]+1){
                ans[i][j-1]=ans[i][j]+1;
                q.push({i,j-1});
            }
        }
     return ans;
    }
};