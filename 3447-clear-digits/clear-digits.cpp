class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string ans="";
        if(!isdigit(s[0]))st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(isdigit(s[i]) && !st.empty() ){
              st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};