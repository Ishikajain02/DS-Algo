/*class Solution {
public:
 void sub(string s,int i,set<string>&st,string t1){
    if(i>=s.size())return;
    if(t1.size()>3)return;
    if(t1.size()==3 && t1[0]==t1[2]){
        st.insert(t1);
        return;
    }
    if(t1.size()==3 && t1[0]!=t1[2])return;
    //take;
    t1+=s[i];
    sub(s,i+1,st,t1);
    t1.pop_back();
    sub(s,i+1,st,t1);



 }
    int countPalindromicSubsequence(string s) {
        //number of unqie subsequence of length 3
        set<string>st;
        string t1="";
        sub(s,0,st,t1);
        return st.size();
    }
};*/
class Solution {
public:
    void sub(string s, int i, set<string>& st, string t1) {
        if (t1.size() == 3) {  // Only process subsequences of length 3
            if (t1[0] == t1[2]) {  // Check if it is a palindrome
                st.insert(t1);  // Add the palindromic subsequence to the set
            }
            return;  // No need to continue once we've processed a subsequence of length 3
        }
        
        if (i >= s.size()) return;  // If we've processed all characters, stop

        // Take the current character
        t1 += s[i];
        sub(s, i + 1, st, t1);  // Recurse with the current character added

        // Do not take the current character (backtrack)
        t1.pop_back();
        sub(s, i + 1, st, t1);  // Recurse without the current character
    }

    int countPalindromicSubsequence(string s) {
      /*  set<string> st;
        string t1 = "";  // Temporary string for subsequences
        sub(s, 0, st, t1);  // Start recursion
        return st.size();  // Return the number of unique palindromic subsequences*/
        //trying different approach
        set<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);

        }
        for(auto it:st){
            int i=-1;
            int j=0;
            for(int k=0;k<s.size();k++){
                if(s[k]==it){
                if(i==-1)i=k;
                j=k;
                }
            }
            set<char>n;
            for(int k=i+1;k<j;k++){
                n.insert(s[k]);
            }
            ans+=n.size();
        }
        return ans;
    }
};
