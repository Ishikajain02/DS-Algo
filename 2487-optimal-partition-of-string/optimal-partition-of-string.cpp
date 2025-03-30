class Solution {
public:
    int partitionString(string s) {
        int ans=0;
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(st.count(s[i])!=0){
                ans++;
                st.clear();
             //   cout<<s[i]<<" "<<ans<<endl;
                st.insert(s[i]);
            }
            else st.insert(s[i]);
        }
        if(!st.empty() )ans++;
        return ans;
    }
};