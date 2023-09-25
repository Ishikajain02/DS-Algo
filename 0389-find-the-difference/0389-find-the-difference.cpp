class Solution {
public:
 char findTheDifference(string s, string t) {
     unordered_map<char,int>m;
        for(int i=0;i<t.size();i++)
            m[t[i]]++;
        for(int i=0;i<s.size();i++)
            m[s[i]]--;
      for(auto it:m){
          if(it.second==1)
              return it.first;
      }
        return ' ';
    }
/*    char findTheDifference(string s, string t) {
        unordered_multiset<int>mp;
        for(int i=0;i<t.length();i++){
            mp.insert(t[i]);
        }
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                mp.erase(s[i]);
            }
        }
        if(!mp.empty())return *mp.begin();
        return NULL;
    }*/
};