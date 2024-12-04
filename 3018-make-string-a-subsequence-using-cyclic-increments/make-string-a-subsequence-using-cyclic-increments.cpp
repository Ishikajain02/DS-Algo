class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
       //without incrementing
       int left1=0,left2=0;
       while(left1<str1.size() && left2<str2.size()){
        if(str1[left1]==str2[left2]){
            left1++;
            left2++;
        }
        else left1++;
       }
       if(left2==str2.size())return true;
       //just use incrementing
       int l=0,r=0;
       while(l<str1.size() && r<str2.size()){
        if(str1[l]==str2[r]){
            l++;
            r++;
        }
        else if(str1[l]+1==str2[r]){
            l++;
            r++;
        }
        else if(str1[l]-25==str2[r]){
            l++;
            r++;
        }
        else l++;
       } 
   if(r==str2.size())return true;
   return false;
    }
};