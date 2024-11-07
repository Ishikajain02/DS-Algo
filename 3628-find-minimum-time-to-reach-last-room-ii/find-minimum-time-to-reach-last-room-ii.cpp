class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
          priority_queue<pair<int,vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;

        int m=moveTime.size();
        int n=moveTime[0].size();
        vector<vector<int>>dp(m,vector<int>(n,INT_MAX));
        dp[0][0]=0;
        pq.push({0,{0,0,1}});
        while(!pq.empty()){
            int t=pq.top().first;
            int i=pq.top().second[0];
            int j=pq.top().second[1];
            int alt=pq.top().second[2];
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
                    if(dp[x][y]>tt+t+alt){
                        dp[x][y]=tt+t+alt;
                        if(alt==2){pq.push({tt+t+2,{x,y,1}});}
                        else pq.push({tt+t+1,{x,y,2}});
                    }

                }
            }
        }
        return -1;
    }
};