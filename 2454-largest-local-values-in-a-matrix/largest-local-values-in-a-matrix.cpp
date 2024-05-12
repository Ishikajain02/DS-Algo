class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>answer;
        for(int i=0;i<grid.size()-2;i++){
            vector<int>ans;
            for(int j=0;j<grid[i].size()-2;j++){
                int largest=0;
                for(int k=i;k<i+3;k++){
                    for(int h=j;h<j+3;h++){

                    
                  largest=max(largest,grid[k][h]);
                }
                }
                ans.push_back(largest);
                
            }
            answer.push_back(ans);
        }
        return answer;
    }
};