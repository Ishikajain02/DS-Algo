class Solution {
public:
    int minSwaps(string s) {
        int ans=0,op=0,cl=0;
        int j=s.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==']')cl++;
            else op++;
            if(cl>op){
                for(;j>=0;j--){
                    if(s[j]=='['){
                        s[j]=']';
                        s[i]='[';
                        cl--;
                        ans++;
                        op++;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};