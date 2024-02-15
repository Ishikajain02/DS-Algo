class Solution {
public:
    bool rotateString(string s, string goal) {
        bool ans=false;
       for(int i=0;i<s.length();i++){
           char val= s[0];
           for(int j=0;j<s.length()-1;j++){
               s[j]=s[j+1];
           }
           s[s.size()-1]=val;
           if(s==goal){
               ans=true;
               break;
           }
       }
       if(!ans)return false;
       return true;
    }
};