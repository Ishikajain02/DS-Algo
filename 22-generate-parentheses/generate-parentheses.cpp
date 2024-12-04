class Solution {
public:
   void fn(string s,vector<string>&ans,int open,int close){
    if(open==0 && close==0){
        ans.push_back(s);
    }
    if(open>0){
        s+='(';
        fn(s,ans,open-1,close);
        s.pop_back();
    }
    if(open<close){
        s+=')';
        fn(s,ans,open,close-1);
    }
   }
    vector<string> generateParenthesis(int n) {
        //works on backtracking along with take and nottake concept
        vector<string>ans;
        int open=n,close=n;
        string s;
        fn(s,ans,open,close);
        return ans;
    }
};