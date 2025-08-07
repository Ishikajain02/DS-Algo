class Solution {
public:
void fn(vector<vector<int>>&vc,int n){
   
}
    vector<vector<int>> generate(int numRows) {

  vector<vector<int>>vc;
  if(numRows==0)return vc;
  vc.push_back({1});
  for(int i=1;i<numRows;i++){
          vector<int>ans;
           ans.push_back(1);
           for(int j=1;j<=i-1;j++){
               ans.push_back(vc[i-1][j-1]+vc[i-1][j]);
           }
           ans.push_back(1);
           vc.push_back(ans);
  
    }
    return vc;
    }
};