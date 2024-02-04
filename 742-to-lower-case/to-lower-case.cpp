class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
            int val =int(s[i]+32);
            ans+=char(val);
            }
            else ans+=s[i];
        }
        return ans;
    }
};