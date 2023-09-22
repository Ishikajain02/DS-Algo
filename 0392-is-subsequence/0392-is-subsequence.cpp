class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
        }
        if(st.empty())return true;
        for(int i=t.length()-1;i>=0;i--){
            if(st.top()==t[i]){
                st.pop();
            }
            if(st.empty())break;
        }
        if(st.empty())return true;
        return false;
    }
};