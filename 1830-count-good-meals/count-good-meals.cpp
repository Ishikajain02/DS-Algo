class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        map<int,int>mp;
        vector<int>powers;
        int ans=0;
        int mod=1000000007;
        for(int i=0;i<=21;i++)powers.push_back(pow(2,i));
        for(int i=0;i<deliciousness.size();i++){
           for(int j=0;j<powers.size();j++){
            int need=powers[j]-deliciousness[i];
            if(mp.count(need)){
                ans=(ans%mod)+(mp[need]%mod);
            }
           }
           mp[deliciousness[i]]++;
        }
        return ans;
    }
};