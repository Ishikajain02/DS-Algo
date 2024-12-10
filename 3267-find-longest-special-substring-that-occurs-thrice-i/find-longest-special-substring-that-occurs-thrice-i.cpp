class Solution {
public:
    int maximumLength(string s) {
        map<string,int>mp;
        for(int i=0;i<s.size();i++){
            string t="";
            t+=s[i];
           // cout<<i<<t<<endl;
           mp[t]++;
            for(int j=i+1;j<s.size();j++){
             if(s[j]==t[0]){
                t+=t[0];
                 mp[t]++;
             }
             else break;
             cout<<t<<endl;
            }
           
        }
        int ans=0;
        for(auto it:mp){
            string f=it.first;
            if(it.second>=3 && f.length()>ans) ans = f.length();
            cout<<it.first<<" "<<it.second<<endl;
           
        }
        
        if(ans==0)return -1;
return ans;
    }
};