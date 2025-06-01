class Solution {
public:
    long long distributeCandies(int n, int limit) {
        //no of ways to distribute candies among 3 childrens
        long long ans=0;
        int mini=max(0,n-(2*limit));
        int maxi=min(n,limit);
        for(int i=mini;i<=maxi;i++){
            int N=n-i;
            int minch2=max(0,N-limit);
            int maxch2=min(N,limit);
            ans+=(maxch2-minch2)+1;
        }
        return ans;
    }
};