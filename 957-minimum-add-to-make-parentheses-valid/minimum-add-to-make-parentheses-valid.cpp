class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')cnt++;
            else cnt--;
            if(cnt<0){
                ans++;
                cnt++;
            }
        }
        return ans+=cnt;
    }
};