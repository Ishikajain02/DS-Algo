class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>vc;
        for(int i=0;i<words.size();i++){
            if(words[i].contains(x))vc.push_back(i);
        }
        return vc;
    }
};