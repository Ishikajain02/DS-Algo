class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int left=0,maxf=0,len=0;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            maxf=max(maxf,mp[s[right]]);
            while(right-left+1-maxf>k){
              mp[s[left]]--;
              if(mp[s[left]]==0)mp.erase(s[left]);
              left++;
            }
            len=max(len,right-left+1);
        }
        return len;
    }
};