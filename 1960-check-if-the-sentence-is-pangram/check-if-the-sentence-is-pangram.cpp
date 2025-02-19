class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(int i=0;i<sentence.size();i++){
        //    if(s.count(sentence[i])!=0)return false;
            s.insert(sentence[i]);
        }
        return s.size()==26;
    }
};