class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int size=grid.size()+grid[0].size();
        //positive key should be descending and negative key should be ascending
        map<int,vector<int>>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &it:mp){
            if(it.first>=0)sort(it.second.rbegin(),it.second.rend());
            else sort(it.second.begin(),it.second.end());
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=mp[i-j].front();
                mp[i-j].erase(mp[i-j].begin());
            }
        }
        return grid;
    }
};