class Solution {
public:
    
    int climbStairs(int n) {
        if(n==0 || n==1)return 1;
      
     // int curr =0;
      int prev = 1, prev2 = 1;
      for(int i=2;i<=n;i++){
         int   curr= prev + prev2;
          prev2 = prev;
          prev = curr;
         
      }
       return prev;
       /* return 0;
         int prev = 1, curr = 1;
        for (int i = 2; i <= n; i++) {
            int temp;
            temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;*/
    }
};