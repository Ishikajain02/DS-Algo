class Solution {
public:
    string getSmallestString(string s, int k) {
        for (auto& it : s) {
            int reql = it - 'a';
            int reqr = 26 - (reql);
            if (reql < reqr) {

                if (reql <= k) {
                    it = 'a';
                    k -= reql;
                } else {
                    it = it-k;
                    break;
                }
            } 
            else {
                if (reqr <= k) {
                    it = 'a';
                    k = k - reqr;

                } else {
                    it = it-k;
                    break;
                }
            }
        }
            return s;
        }
    };