class Solution {
public:
    bool isPowerOfFour(int n) {
        //set5 bit5
        if(n==0)return false;
        int count = __builtin_popcount(n);
if(count>1)return false;
      int pos = __builtin_ctz(n); // count trailing zeros → position of the set bit
      if(pos%2!=0)return false;
      else return true;
    }
};