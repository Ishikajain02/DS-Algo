class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        //maximum limit element 
        priority_queue<int>pq;
        
        for(int i=0;i<grid.size();i++){
            sort(grid[i].rbegin(),grid[i].rend());
        }
        for(int i=0;i<grid.size();i++){
            int limit=limits[i];
            for(int j=0;j<limit;j++){
                pq.push(grid[i][j]);
            }
        }
        long long ans=0;
        while(k--){
        ans+=pq.top();
        pq.pop();
        }
        return ans;
    }
};