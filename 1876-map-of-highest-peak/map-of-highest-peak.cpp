class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        //maximum difference should be atmost 1
        //first and formost assign the cell with value zero as 1
        int n=isWater.size();
        int m=isWater[0].size();
        vector<vector<int>>vc(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    vc[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            if(i+1<n && vc[i+1][j]==-1){
                vc[i+1][j]=1+vc[i][j];
                q.push({i+1,j});
            }
            if(i-1>=0 && vc[i-1][j]==-1){
                vc[i-1][j]=1+vc[i][j];
                q.push({i-1,j});
            }
            if(j+1<m && vc[i][j+1]==-1){
                vc[i][j+1]=1+vc[i][j];
                q.push({i,j+1});
            }
            if(j-1>=0 && vc[i][j-1]==-1){
                vc[i][j-1]=1+vc[i][j];
                q.push({i,j-1});
            }
            q.pop();
        }
     return vc;

    }
};