class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k==2 || k==5)return -1;
        string s="";
        
        long num=0;
        for(int i=1;i<=k;i++){
             num = (num * 10 + 1) % k;
            if(num%k==0)return i;
        }
          return -1;
    }
};