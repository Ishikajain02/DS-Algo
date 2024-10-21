class Solution {
public:
 void solve(set<string>st,int &maxi,int currcount,int i,string s){
    if(i>=s.size()){
        maxi=max(maxi,currcount);
    }
    for(int j=i;j<s.size();j++){
        string sub=s.substr(i,j-i+1);
        if(st.find(sub)==st.end()){
            st.insert(sub);
                    solve(st,maxi,currcount+1,j+1,s);
                    st.erase(sub);
        }

    }
 }
    int maxUniqueSplit(string s) {
        int maxi=0;
        int currcount=0;
        int i=0;
        set<string>st;
        solve(st,maxi,currcount,i,s);
        return maxi;
    }
};