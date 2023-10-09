class Solution {
public:
 int ways(int index, string s, vector<int>&dp){
     if(index==s.length())return 1;
     if(dp[index]!=-1)return dp[index];
     int count=0;
     if(s[index]!='0'){
         count+=ways(index+1,s,dp);
     }
     if(index+1<s.length() && (s[index]=='1' || s[index]=='2'&& s[index+1]<='6')){
         count += ways(index+2,s,dp);
     }
     return dp[index]=count;
 }
    int numDecodings(string s) {
        int n = s.length();
     vector<int>dp(n+1,-1);
    return ways(0,s,dp);
    }
};