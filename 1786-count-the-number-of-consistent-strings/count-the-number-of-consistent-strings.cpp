class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>s;
        for(int i=0;i<allowed.size();i++)s.insert(allowed[i]);
        int cnt=0;
        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<words[i].size();j++){
                if(s.find(words[i][j])==s.end())flag=false;
            }
            if(flag)cnt++;
        }
        return cnt;
    }
};