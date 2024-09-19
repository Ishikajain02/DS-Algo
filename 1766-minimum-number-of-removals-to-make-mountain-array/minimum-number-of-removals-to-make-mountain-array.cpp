class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>dp2(n,1);
        int maxi=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }

            }
            maxi=max(maxi,dp[i]);
        }
        int maxi2=1;
//        vector<int>dp2(n,1);

        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>i;j--){
              //  if(i==4)cout<<dp2[i]<<dp2[j]<<endl;
                if(nums[i]>nums[j]){
                 dp2[i]=max(dp2[i],1+dp2[j]);
                }

            }
            maxi2=max(maxi2,dp2[i]);
        
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
         if (dp[i] > 1 && dp2[i] > 1) 
         ans=max(ans,dp[i]+dp2[i]-1);
        }
      /*  for(int i=0;i<n;i++)cout<<dp[i];
        cout<<endl;
        for(int i=0;i<n;i++)cout<<dp2[i];
        cout<<endl;*/
        return n-ans;
    }
};