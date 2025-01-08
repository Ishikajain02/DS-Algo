class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i].size()>words[j].size())continue;
                else{
                  string sub1=words[j].substr(0,words[i].size());
                  string substr2=words[j].substr(words[j].size()-words[i].size());
                  if(sub1==substr2 && sub1==words[i])ans++;
                }
            }
        }
        return ans;
    }
};