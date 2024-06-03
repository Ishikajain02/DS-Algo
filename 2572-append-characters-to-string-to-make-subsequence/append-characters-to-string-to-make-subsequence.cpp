class Solution {
public:
    int appendCharacters(string s, string t) {
        int cnt=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]){
                j++;
            }
            
        }
        cnt=(t.size()-(j));
        return cnt;
    }
};