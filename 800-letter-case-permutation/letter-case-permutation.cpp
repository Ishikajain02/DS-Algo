class Solution {
public:
void fn(vector<string>&ans,string vc,string s,int ind){
    if(ind==s.size()){
      ans.push_back(vc);
      return;

    }
    if(!isalpha(s[ind])){
        vc+=s[ind];
        fn(ans,vc,s,ind+1);
    }
    else{
       char ch=tolower(s[ind]);
       vc+=ch;
        fn(ans,vc,s,ind+1);
        vc=vc.substr(0,vc.size()-1);
     //  vc.pop_back();
        char ch2=toupper(s[ind]);
        vc+=ch2;
        fn(ans,vc,s,ind+1);
        
    }
}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string vc="";
      fn(ans, vc,s,0);
      return ans;
    }
};