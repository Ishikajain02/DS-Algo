class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        char prev;
        prev=s[0];
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            cout<<st.size()<<endl;
            if(s[i]=='B'){
                if(prev=='A'){
                    st.pop();
                    if(!st.empty())prev=st.top();
                    else prev='\0';
                }
                else {
                    st.push(s[i]);
                    prev=s[i];
                }
            }
            else if(s[i]=='D'){
                if(prev=='C'){
                    st.pop();
                     if(!st.empty())prev=st.top();
                    else prev='\0';
                }
                else {
                    st.push(s[i]);
                    prev=s[i];
                }
            }
            else {
                st.push(s[i]);
                prev=s[i];
            }
        }
        return st.size();
    }
};