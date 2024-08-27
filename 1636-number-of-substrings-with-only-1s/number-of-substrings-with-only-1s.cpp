class Solution {
public:
    int numSub(string s) {
        long long ans=0;
        long long cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                ans+=(((cnt1*(cnt1+1))/2));
                cnt1=0;
            }
        }
        if(cnt1!=0){
           ans+=(((cnt1*(cnt1+1))/2));  
        }
        int mod=1e9+7;
      
       return ans%mod;
    }
};