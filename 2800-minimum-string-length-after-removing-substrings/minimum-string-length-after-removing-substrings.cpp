class Solution {
public:
    int minLength(string s) {
        int left=0;
        for(int right=0;right<s.size();right++){
            s[left]=s[right];
            if(left>0 && (s[left-1]=='A' || s[left-1]=='C') && s[left]-'A'==s[left-1]-'A'+1){
                left--;
            }
            else left++;
        }
        return left;
    }
};