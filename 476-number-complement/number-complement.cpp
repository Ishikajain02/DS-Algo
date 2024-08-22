class Solution {
public:
   void binary(int num,string &s){
     if(num==0 || num==1){
         char bit = (num % 2) + '0'; // Convert remainder to '0' or '1'
        s = bit + s;
        return ;
     }
       char bit = (num % 2) + '0'; // Convert remainder to '0' or '1'
        s = bit + s;
     num/=2;
     binary(num,s);
   }
    int findComplement(int num) {
      int power=0;
      string s="";
      binary(num,s);
      cout<<s<<endl;
      int ans=0;
      for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            ans+=pow(2,power);
            cout<<power<<endl;
        }
        power++;
      }
      return ans;
    }
};