class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        map<int,int>mp;
        long long cnt=0;
        for(int i=0;i<hours.size();i++){
            int val=hours[i]%24;
            int temp=(24-val)%24;
            if(mp.find(temp)!=mp.end()){
                cnt+=mp[temp];
            }
            mp[val]++;

            
        }
        return cnt;
    }
};