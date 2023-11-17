class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
      unordered_map<string,string>m;
        for(int i=0;i<knowledge.size();i++){
            m[knowledge[i][0]] = knowledge[i][1];
        }
        string str;
        stack<char>st;
        string demo;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(!st.empty() && st.top()=='(' && s[i]==')'){
                auto it = m.find(demo);
                if(it==m.end()) str += '?';
                else str += m[demo];
                demo.clear();
                st.pop();
            }
            else if(!st.empty() && st.top() == '(' && s[i]!=')'){
                demo += s[i];
            }
            else{
                str += s[i];
            }
        }
        return str;
    }
};