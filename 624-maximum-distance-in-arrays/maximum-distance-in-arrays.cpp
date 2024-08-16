class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxi=arrays[0].back(),mini=arrays[0][0];
        int maxi_diff=0;
        for(int i=1;i<arrays.size();i++){
            
                maxi_diff=max(maxi_diff,abs(arrays[i].back()-mini));
                maxi_diff=max(maxi_diff,abs(maxi-arrays[i][0]));
                mini=min(mini,arrays[i][0]);
                maxi=max(maxi,arrays[i].back());
               // maxi=max(arrays[i][j],maxi);
                //mini=min(arrays[i][j],mini);
            
        }
        return maxi_diff;
    }
};