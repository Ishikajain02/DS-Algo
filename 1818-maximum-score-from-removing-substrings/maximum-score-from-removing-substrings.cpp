class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int coding=0;
        if(x>y){
            //ab
         for(int i=0;i<s.size();i++){
            if(!st.empty()&&s[i]=='b'&&st.top()=='a'){
                coding+=x;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
         }
         s.clear();
         while(!st.empty()){
            //ba
            s+=st.top();
            st.pop();
         }

         reverse(s.begin(),s.end());
         for(int i=0;i<s.size();i++){
            if(!st.empty()&&s[i]=='a'&&st.top()=='b'){
                coding+=y;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
         }
        }
        else{
        //ba
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()=='b' && s[i]=='a'){
                coding+=y;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        //ab
        s.clear();
        while(!st.empty()){
          s+=st.top();
          st.pop();
        }
        reverse(s.begin(),s.end());
         for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()=='a' && s[i]=='b'){
                coding+=x;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        }
        return coding;
    }
};