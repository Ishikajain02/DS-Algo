class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>>adj(n,vector<int>(11,0));
        for(int i=0;i<pick.size();i++){
            adj[pick[i][0]][pick[i][1]]++;
        }
        int ans=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<adj[i][j]<<" ";
        cout<<endl;
       }
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
             if(adj[i][j]>i){
                ans++;
             break;
             }
            }
        }
        return ans;
    }
};