class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        int zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zero++;
            else ones++;
        }
        cout<<ones<<zero;
        s[s.size()-1]='1';
        ones--;
        for(int i=0;i<s.size()-1;i++){
            if(ones>0){
                s[i]='1';
                ones--;
            }
            else{
                s[i]='0';
                zero--;
            }
        }
        return s;
    }
};