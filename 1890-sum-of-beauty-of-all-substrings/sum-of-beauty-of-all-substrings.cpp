class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
          unordered_map<char,int>m;
       
          for(int j=i;j<s.size();j++){
              m[s[j]]++;
         int mini=INT_MAX;
          int maxi=0;
            for(auto ch:m){
                mini=min(ch.second,mini);
                maxi=max(ch.second,maxi);
            }
            ans+=(maxi-mini);
          }
        }
        return ans;
    }
};