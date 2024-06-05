class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>common(26,0);
        for(int i=0;i<words[0].size();i++){
            common[words[0][i]-'a']++;
        }
        vector<string>ans;
        for(int i=1;i<words.size();i++){
            vector<int>ch(26,0);
            for(int j=0;j<words[i].size();j++)ch[words[i][j]-'a']++;
            for(int i=0;i<26;i++){
                common[i]=min(common[i],ch[i]);
            }

        }
        for(int i=0;i<26;i++){
            for(int j=0;j<common[i];j++){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
    }
};