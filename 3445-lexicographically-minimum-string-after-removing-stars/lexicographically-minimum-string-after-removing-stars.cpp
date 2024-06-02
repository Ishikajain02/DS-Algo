class Solution {
public:
    string clearStars(string s) {
        set<pair<char,int>>st;
        set<int>del;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                st.insert({s[i],-(i)});
            }
            else{
                auto it=st.begin();
                int idx=it->second;
                st.erase(it);
                del.insert(-(idx));
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*')continue;
            else if(del.count(i))continue;
            else ans+=s[i];
        }
        return ans;
    }
};