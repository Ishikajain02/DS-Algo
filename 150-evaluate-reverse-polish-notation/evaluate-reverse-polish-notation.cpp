class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(st.empty()){
                st.push(stoi(tokens[i]));
            }
            else if (tokens[i]=="+"||tokens[i]=="-"|| tokens[i]=="/"|| tokens[i]=="*"){
                string ch= tokens[i];
                int prev=st.top();
                st.pop();
                int go= st.top();
                st.pop();
                if(ch=="+")st.push(prev+go);
                else if (ch=="-")st.push(go-prev);
                else if (ch=="*")st.push(go*prev);
                else st.push(go/prev);
            }
            else st.push(stoi(tokens[i]));
        }
        ans=st.top();
        return ans;
    }
};