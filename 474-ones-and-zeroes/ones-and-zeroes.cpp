class Solution {
public:


int solve(vector<pair<int,int>>&vc,int m,int n,int i, vector<vector<vector<int>>>&ans){
    if(i>=vc.size() || (m==0 &&n==0))return 0;
    if(ans[m][n][i]!=-1)return ans[m][n][i];
    int take=0;
    if(vc[i].first<=m && vc[i].second<=n) take=1+solve(vc,m-vc[i].first,n-vc[i].second,i+1,ans);
    int nottake=solve(vc,m,n,i+1,ans);
    return ans[m][n][i]=max(take,nottake);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>>ans(101,vector<vector<int>>(101,vector<int>(601,-1)));
        vector<pair<int,int>>vc;
        for(int i=0;i<strs.size();i++){
            int zero=0,one=0;
           for(int j=0;j<strs[i].size();j++){
             if(strs[i][j]=='0')zero++;
             else one++;
           }
           vc.push_back({zero,one});
        }
        return solve(vc,m,n,0,ans);

    }
};