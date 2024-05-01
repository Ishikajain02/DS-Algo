class Solution {
public:
    string reversePrefix(string word, char ch) {
        string st="";
        int cnt=0;
        for(int i=0;i<word.size();i++){
            if(word[i]!=ch)st+=word[i];
            if(word[i]==ch){
                st+=word[i];
                if(cnt==0){
                   reverse(st.begin(),st.end());
                   cnt++;
                }
                
            }
        }
        return st;
    }
};