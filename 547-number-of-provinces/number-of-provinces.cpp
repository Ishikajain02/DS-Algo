class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        //BFS Connected;
        int count=0;
        int n=isConnected.size();
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
        if(visited[i]==false){
            count++;
            queue<int>q;
            q.push(i);
            visited[i]=true;
            while(!q.empty()){
                int t=q.front();
                q.pop();
                
                for(int i=0;i<n;i++){
                    if(!visited[i] && isConnected[i][t]==1){
                        q.push(i);
                        visited[i]=true;
                    }
                }
            }
        }
        }
        return count;
    }
};