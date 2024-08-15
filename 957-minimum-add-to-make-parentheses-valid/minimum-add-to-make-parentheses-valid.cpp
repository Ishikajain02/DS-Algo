class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int start=0,end=s.size(),op=0,cl=0;
        while(start<end){
            if(s[start]==')')ans++;
            else break;
            start++;
        }
        end--;
        while(end>=0){
            if(s[end]=='(')ans++;
            else break;
            end--;
        }
        while(start<=end){
            if(s[start]=='('){
                op++;
            }
            if(s[start]==')'){
                if(op>0)op--;
                else cl++;
            }
            start++;
        }
        ans+=op;
        ans+=cl;

        return ans;
    }
};