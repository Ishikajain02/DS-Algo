class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        //only one character
        //diffrenet character before and after it
        for(int i=0;i<s.size()-k+1;i++){
            set<char>st;
            for(int j=i;j<i+k;j++){
              st.insert(s[j]);
            }
            bool tt=false;
            if(st.size()==1){
                tt=true;
                if(i>0){
                    st.insert(s[i-1]);
                    if(s[i-1]==s[i]){
                        tt=false;
                        continue;
                    }
                   // else tt=true;
                }
                if(i<s.size()-1){
                    st.insert(s[i+k]);
                    if(s[i+k]==s[i])tt=false;
                    else tt=true;
                }
                if(tt)return true;
            }
        }
        return false;
    }
};