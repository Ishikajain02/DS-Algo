class Solution {
public:
    bool checkDivisibility(int n) {
        int digisum=0,pro=1;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            digisum+=(s[i]-'0');
            pro*=(s[i]-'0');
        }
      digisum+=pro;
      return (n%digisum==0);
    }
};