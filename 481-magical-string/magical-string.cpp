class Solution {
public:
    int magicalString(int n) {
        if(n<=3)return 1;
      string ans= "122";
      int j=2;
      int i=2;
      while(j<n){
          if(ans[i]=='1'){
              if(ans[j]=='1'){
                  ans+="2";
              }
              else{
                  ans+="1";
              }
              j++;
          }
          else{
              if(ans[j]=='1'){
                  ans+="22";
              }
              else{
                  ans+="11";
              }
              j+=2;
          }
          i++;

      }
      int cnt=0;
      for(int i=0;i<n;i++){
          if(ans[i]=='1')cnt++;
      }
      return cnt;
    }
};