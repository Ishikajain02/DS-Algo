class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.size()==0)ans+=s[i];
           else if(ans.back()==s[i]+32  || ans.back()==s[i]-32 ){
           // i++;
            ans.pop_back();
           }
            else ans+=s[i];
        }
        return ans;
    }
};