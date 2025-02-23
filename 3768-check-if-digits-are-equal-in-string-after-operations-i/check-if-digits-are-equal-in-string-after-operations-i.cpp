class Solution {
public:

    bool hasSameDigits(string s) {
      while (s.size() > 2) {
            string f = "";
            for (int i = 0; i < s.size() - 1; ++i) {
                int digit1 = s[i] - '0';
                int digit2 = s[i + 1] - '0';
               
                f += char((digit1 + digit2) % 10 + '0');
            }
           
            s = f;
        }
        
        
        return s[0] == s[1];
    }
};