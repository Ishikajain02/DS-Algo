class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0,even=0;

        for(int i=0;i<2*n;i++){
            if((i+1)%2==0){
                even+=(i+1);
            }
            else odd+=(i+1);
        }
        return gcd(even,odd);
    }
};