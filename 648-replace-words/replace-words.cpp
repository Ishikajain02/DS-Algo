class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
       unordered_set<string> dictSet(dictionary.begin(), dictionary.end());
        string ans = "";
        int i = 0, n = sentence.size();
        while (i < n) {
            string word = "";
            while (i < n && sentence[i] != ' ') {
                word += sentence[i++];
            }
            bool found=false;
            for (int j = 1; j <= word.size(); ++j) {
                if (dictSet.count(word.substr(0, j))) {
                    ans += word.substr(0, j);
                    found=true;
                    break;
                }
            }
            if(!found)ans+=word;
            ans += " ";
            ++i;
        }
        return ans.substr(0, ans.size() - 1); 
    }
};