class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        int cnt=0;
        if(m*n!=original.size())return ans;
        for(int i=0;i<m;i++){
            vector<int>vc;
            for(int j=0;j<n;j++){
                vc.push_back(original[cnt]);
                cnt++;
            }
            ans.push_back(vc);
        }
        return ans;
    }
};