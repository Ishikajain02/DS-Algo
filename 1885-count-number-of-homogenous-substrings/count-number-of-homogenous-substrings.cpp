class Solution {
public:
    int countHomogenous(string s) {
        long long cnt1=1;
        char prev=s[0];
        long long ans=0;
        //substrings can be formed is n*(n+1)/2
        for(int i=1;i<s.size();i++){
            if(s[i]==prev)cnt1++;
            else{
                ans+=((cnt1*(cnt1+1))/2);
             //   cout<<prev<<" "<<cnt1<<endl;
                cnt1=1;
                prev=s[i];
            }
        }
        ans+=((cnt1*(cnt1+1))/2);
        int mod=1e9+7;
        return ans%mod;
    }
};