class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+nums[i];
        for(int j=n-2;j>=0;j--){
            suffix[j]=suffix[j+1]+nums[j];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(abs(prefix[i]-suffix[i+1])%2==0)ans++;
        }
        return ans;
    }
};