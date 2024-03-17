class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_map<string,int>mp;
        if(s.size()<2)return false;
        for(int i=0;i<s.size()-1;i++){
            mp[s.substr(i,2)]++;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            if(mp.count(s.substr(i,2))>0)return true;
        }
        return false;
    }
};