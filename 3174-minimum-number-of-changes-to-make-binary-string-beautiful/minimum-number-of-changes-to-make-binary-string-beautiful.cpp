class Solution {
public:
    int minChanges(string s) {
     int cnt=1;
     int ans=0;
     char prev=s[0];
     for(int i=1;i<s.size();i++){
        if(prev!=s[i] && cnt%2!=0){
            ans++;
            cnt++;
        }
        else if(prev!=s[i] && cnt%2==0){
            prev=s[i];
            cnt=1;
        }
        else if(prev==s[i]){
            cnt++;
        }
     }
     return ans;
    }
};