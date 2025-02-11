class Solution {
public:
bool istrue(stack<char>&st,string &part,string &s){
    stack<char>sim=st;
    for(int j=part.size()-1;j>=0;j--){
        if(sim.top()!=part[j])return false;
        sim.pop();
    }
    return true;
}
    string removeOccurrences(string s, string part) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            if(st.size()>=part.size() && istrue(st,part,s)){
                for(int j=0;j<part.size();j++)st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};