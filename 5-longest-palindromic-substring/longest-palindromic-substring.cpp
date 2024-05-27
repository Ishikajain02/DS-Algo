class Solution {
public:
//BRUTE FORCE -O(N^3)
/*
bool ispalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
       // BRUTE FORCE
       //O(N^3)
       int len=0;
       int val1=-1,val2=-1;
       for(int i=0;i<s.size();i++){
        string longest="";
        for(int j=i;j<s.size();j++){
            longest+=s[j];
           if(ispalindrome(longest)){
            if(len<longest.size()){
                len=longest.size();
                val1=i;
                val2=j;
            }
           }
        }
        
       }
       string ans="";
       
       return s.substr(val1,val2+1);


       */
       string check(int start,int end,string s){
        int left=start;
        int right=end;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);

       }
        string longestPalindrome(string s) {
            //OPTIMISED VERSION 
            //FROM DP-O(N^2)
            //SC-O(N)
            //TO
            //TC-O(N^2);
            //SC-O(1)
            string ans="";
            for(int i=0;i<s.size();i++){
                //odd length
                string odd=check(i,i,s);
                if(odd.size()>ans.size())ans=odd;
                //even length
                string even=check(i,i+1,s);
                if(even.size()>ans.size())ans=even;
            }
            return ans;
    }
};
