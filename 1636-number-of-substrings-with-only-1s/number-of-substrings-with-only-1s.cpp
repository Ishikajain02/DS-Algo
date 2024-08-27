class Solution {
public:
    int numSub(string s) {
        //using sliding window logic;
        int left=0;
        long long ans=0;
        for(int right=0;right<s.size();right++){
            if(s[right]=='0'){
                left=right+1;
            }
            else{
                ans+=(right-left+1);
            }
        }
        int mod=1e9+7;
        return ans%mod;
    }
};