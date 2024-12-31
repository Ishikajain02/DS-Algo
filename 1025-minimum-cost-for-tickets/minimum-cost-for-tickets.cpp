class Solution {
public:
int fn(vector<int>&days,vector<int>&costs,set<int>&s,int day,vector<int>&dp){
if(day>365)return 0;
if(dp[day]!=-1)return dp[day];
if(s.find(day)==s.end())return dp[day]= fn(days,costs,s,day+1,dp);
return dp[day]=min({costs[0]+fn(days,costs,s,day+1,dp),costs[1]+fn(days,costs,s,day+7,dp),costs[2]+fn(days,costs,s,day+30,dp)});
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        set<int>s;
        vector<int>dp(366,-1);
        for(int i=0;i<days.size();i++)s.insert(days[i]);
      return fn(days,costs,s,0,dp);
    }
};