class Solution {
public:
    int maxProduct(int n) {
        //maximum prodeuct will be taken by multiplying two largest digits
       int maxi1 = 0;
        int maxi2 = 0;
        string s = to_string(n);
        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';
            if (digit > maxi1) {
                maxi2 = maxi1;
                maxi1 = digit;
            } else if (digit > maxi2) {
                maxi2 = digit;
            }
        }
        return maxi1 * maxi2;
    }
};