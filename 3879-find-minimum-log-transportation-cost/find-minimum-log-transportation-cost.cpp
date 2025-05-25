class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        //logs of m and n sizes
        //3 trucs //each carry atmost k units
        long long ans=0;
        if(n>k){
            long long mul=1LL*(n-k)*k;
            ans+=mul;
        }
        if(m>k){
                 long long mul=1LL*(m-k)*k;
            ans+=mul;
        }
        return ans;

    }
};