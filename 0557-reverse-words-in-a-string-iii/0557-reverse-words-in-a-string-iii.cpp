class Solution {
public:
void fun(stack<char>&st, vector<char>& str)
    {
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        
    }

    string reverseWords(string s) {
/*        stack<char>st;
        string t="";
        for(int i=0;i<s.size();i++){
         if(i == s.length()-1) t+=s[i];
         if(s[i]==' ' || i==s.size()-1){
             while(!st.empty()){
                 t = t+ st.top();
                 st.pop();
             }
             if(i!=s.size()-1){
               t = t+" ";
             }
            
         }
          else st.push(s[i]);
        }
        s.clear();
     return t;*/
      vector<char>str;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(i == s.length()-1) str.push_back(s[i]);
            if(s[i] == ' ' || i == s.length()-1)
            {
                fun(st,str);
                if(i != s.length()-1) str.push_back(s[i]);
            }
            else{
                st.push(s[i]);
            }
            
        }
        s.clear();
        string res(str.begin(),str.end());
        return res;  
    }
};