class Solution {
public:
void tn(vector<int>&candidates,int target,vector<int>vc,set<vector<int>>&s,int ind,int sum){
 
    if(sum==target){
        s.insert(vc);
        return;
    }
       if(sum>target|| ind>=candidates.size())return ;
    //take
    vc.push_back(candidates[ind]);
    tn(candidates,target,vc,s,ind+1,sum+candidates[ind]);
    //nottake
    vc.pop_back();
      // Skip duplicates
        while (ind + 1 < candidates.size() && candidates[ind] == candidates[ind + 1]) {
            ind++;
        }
    tn(candidates,target,vc,s,ind+1,sum);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //take and not take
        set<vector<int>>s;
        vector<vector<int>>ans;
        vector<int>vc;
        sort(candidates.begin(),candidates.end());
      //  for(int i=0;i<candidates.size();i++){        
        tn(candidates,target,vc,s,0,0);
        
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};