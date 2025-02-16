class Solution {
public:
bool solve(int i,int n,vector<int>&ans,vector<bool>used){
    if(i>=ans.size())return true;
    if(ans[i]!=-1){
        return solve(i+1,n,ans,used);
    }
    for(int j=n;j>=1;j--){
        if(used[j]){
            continue;
        }
        used[j]=true;
        ans[i]=j;
        if(j==1){
          if(solve(i+1,n,ans,used))return true;  
        } 
        else{
            int k=ans[i]+i;
            if(k<ans.size() && ans[k]==-1){
                ans[k]=j;
                if(solve(i+1,n,ans,used))return true;
               ans[k]=-1;
            }         
        }
        used[j]=false;
        ans[i]=-1;
        
    }
    return false;
}
    vector<int> constructDistancedSequence(int n) {
        vector<int>ans(2*n-1,-1);
        vector<bool>used(n+1,false);
        solve(0,n,ans,used);
        return ans;

    }
};