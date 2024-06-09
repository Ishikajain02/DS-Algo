class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int mod=1000000007;
      vector<int>prefixsum(n,1);
      prefixsum[0]=1;
      while(k--){
      for(int i=1;i<n;i++){
        prefixsum[i]=(prefixsum[i-1]+prefixsum[i])%mod;
      }
      }
      return prefixsum[n-1]%mod;
    }
};