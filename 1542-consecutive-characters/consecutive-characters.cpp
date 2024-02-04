class Solution {
public:
    int maxPower(string s) {
        int ans=1,mx=1;
        for(int i=0;i<s.length()-1;i++){
          if(s[i]==s[i+1])ans++;
          else{
              ans=1;
          }
          mx=max(mx,ans);
        }
        return mx;
    }
};