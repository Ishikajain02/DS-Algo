class Solution {
public:
    bool isValid(string s) {
        //stack is used
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.empty() && (s[i]==')' || s[i]=='}'  || s[i]==']'))return false;
            if(s[i]==')' && st.top()!='(')return false;
            if(s[i]==']' && st.top()!='[')return false;
            if(s[i]=='}' && st.top()!='{')return false;
            else if(s[i]==')' && st.top()=='(')st.pop();
            else if(s[i]==']' && st.top()=='[')st.pop();
            else if(s[i]=='}' && st.top()=='{')st.pop();
            else st.push(s[i]);
        }
       if(st.empty()) return true;
       return false;
    }
};