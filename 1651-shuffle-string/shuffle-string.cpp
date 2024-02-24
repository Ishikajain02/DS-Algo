class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>vc(s.size());
        for(int i=0;i<s.size();i++){
            vc[indices[i]]=s[i];
        }
        string ans="";
        for(int i=0;i<vc.size();i++){
            ans+=vc[i];
        }
        return ans;
    }
};