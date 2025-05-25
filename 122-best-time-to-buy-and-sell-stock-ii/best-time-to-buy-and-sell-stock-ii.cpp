class Solution {
public:
int fn(vector<int>&prices,vector<vector<int>>&vc,int i,bool flag){
    if(i>=prices.size())return 0;
    if(vc[i][flag]!=-1)return vc[i][flag];
    
    if(flag){
      vc[i][flag]=max(prices[i]+fn(prices,vc,i+1,false),fn(prices,vc,i+1,true));    
    }
    else{
        vc[i][flag]=max(fn(prices,vc,i+1,true)-prices[i],fn(prices,vc,i+1,false));
    }
    return vc[i][flag];
}
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     vector<vector<int>>vc(n,vector<int>(2,-1));
    return fn(prices,vc,0,false);
    }
};