class Solution {
public:
 void  solve(int n, vector<int>&ans,int curr){
    if(curr>n)return;
    ans.push_back(curr);
   // string num=to_string(curr);
    for(int i=0;i<=9;i++){
        int num=curr*10+i;
        if(num>n)return;

      //  ans.push_back(curr);
        solve(n,ans,num);
    }
    return;
   }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
        //  if(i>n)return ans;
      //    ans.push_back(i);
         solve(n,ans,i);
        }
        return ans;
    }
};