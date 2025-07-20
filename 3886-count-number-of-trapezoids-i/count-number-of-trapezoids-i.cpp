class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        long mod=1e9+7;
        map<int,int>mp;
        long long ans=0,sum=0;
        for(int i=0;i<points.size();i++){
            mp[points[i][1]]++;
        }
        for(auto it:mp){
            long cnt=it.second;
            long long pairs=(cnt*(cnt-1))/2;
            sum+=pairs;
        }
        for(auto it:mp){
            long cnt=it.second;
             long long pairs=(cnt*(cnt-1))/2;
             sum-=pairs;
             ans+=(sum*pairs);
        }
        return ans%mod;
    }
};