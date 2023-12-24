class Solution {
public:
    int minOperations(string s) {
        int prev= s[0];
        int count=0;
        int n= s.length();
        for(int i=1;i<s.length();i++){
            if(prev!=s[i])prev=s[i];
            else {
                if(s[i]=='1')s[i]='0';
                else s[i]='1';
                count++;
                prev=s[i];
            }
        }
        int ans= min(count,n-count);
        return ans;
    }
};