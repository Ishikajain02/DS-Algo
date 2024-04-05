class Solution {
public:
    string makeGood(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() &&(s[i]==tolower(st.top()) || s[i]==toupper(st.top())) && s[i]!=st.top())st.pop();
            else st.push(s[i]);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};