class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="";
        for(int i=0;i<word1.size();i++){
            s+=word1[i];
        }
        string s2="";
        for(int i=0;i<word2.size();i++){
            s2+=word2[i];
        }
        if(s==s2)return true;
        return false;
    }
};