class Solution {
public:
    string minRemoveToMakeValid(string s) {
        //string temp="";
        int op=0,cl=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                op++;
            }
            else if(s[i]==')'){
                if(op>cl){
                  cl++;
                }
                else{
                    s[i]='@';
                    continue;
                }
            }
            //temp+=s[i];
        }
        op=0,cl=0;
        //string tt="";
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='('){
                if(cl>op){
                    op++;
                }
                else {
                    s[j]='@';
                    continue;
                }
            }
            else if(s[j]==')')cl++;
           // tt=temp[j]+tt;
        }
        //return tt;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='@')continue;
            temp+=s[i];
        }
        return temp;
    }
};