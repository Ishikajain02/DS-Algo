class Solution {
public:
    string makeFancyString(string s) {
        int cnt=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.size()==0){
                ans+=s[i];
                cnt=1;
            }
           else if(ans.back()==s[i] && cnt<2){
            ans+=s[i];
            cnt++;
           }
           else if(ans.back()!=s[i]){
            ans+=s[i];
            cnt=1;
           }
           
        }
        return ans;
    }
};