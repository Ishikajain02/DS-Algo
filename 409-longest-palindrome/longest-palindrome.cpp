class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        bool found =false;
       int maxi=0;
        int d=0;
        for(auto it:mp){
            if(it.second%2!=0 ){
             d+=it.second-1;
             found=true;
            }
            else if(it.second%2==0)d+=it.second;
        }
        if(found)return d+1;
      //  if(maxi==INT_MIN)return d;
        return d;
    }
};