class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
       priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        int m=moveTime.size();
        int n=moveTime[0].size();
        vector<vector<int>>dp(m,vector<int>(n,INT_MAX));
        dp[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int t=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            if(i==m-1 && j==n-1)return t;
            pq.pop();
            vector<int>dx={0,1,0,-1};
            vector<int>dy={1,0,-1,0};
            
            for(int k=0;k<4;k++){
                int x=i+dx[k];
                int y=dy[k]+j;
                if(x>=0 && x<m && y>=0 &&  y<n){
                    int tt=t;
                    if(moveTime[x][y]>t){
                        tt=moveTime[x][y];
                    }
                    tt=tt-t;
                    if(dp[x][y]>tt+t+1){
                        dp[x][y]=tt+t+1;
                        pq.push({tt+t+1,{x,y}});
                    }

                }
            }
        }
        return -1;
    }
};