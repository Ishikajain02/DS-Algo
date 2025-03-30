class Solution {
public:
 bool palindrome(string st){
    bool f=false;
    for(int i=0;i<st.size()/2;i++){
       if(st[i]==st[st.size()-1-i])f=true;
       else{
        f=false;
        break;
       }
    }
    if(f)return true;
    return false;
 }
    int longestPalindrome(string s, string t) {
      //brute force can work as constraints are small
      int size=1;
      string r="";
     int n=s.size();
     int m=t.size();
     for(int i=0;i<n;i++){
        string s1="";
        for(int j=i;j<n;j++){
            s1+=s[j];
            if(palindrome(s1))
            size=max(size,j-i+1);
            for(int k=0;k<m;k++){
                string t1="";
                for(int u=k;u<m;u++){
                    t1+=t[u];
                    if(palindrome(t1))size=max(size,u-k+1);
                    int len=s1.size()+t1.size();
                    if(palindrome(s1+t1)) size=max(size,len);
                }
            }
        }
     }
     return size;
    }
};