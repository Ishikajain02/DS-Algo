class Solution {
public:
int count(int num){
    int cnt=0;
    while(num>1){
        cnt+=num&1;
        num=num/2;
    }
    if(num==1)cnt++;
    return cnt;
}
    int countPrimeSetBits(int left, int right) {
        int d=0;
        for(int i=left;i<=right;i++){
          int ans=count(i);
          if(ans==2|| ans==3 || ans==5 || ans==7 || ans==11 || ans==13 || ans==17 || ans==19){
            d++;
          }
        }
        return d;
    }
};