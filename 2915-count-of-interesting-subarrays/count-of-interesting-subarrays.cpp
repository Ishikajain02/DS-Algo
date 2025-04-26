class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        //cnt is the number of indices 
        int n=nums.size();
        vector<int>prefix(n,0);
        if(nums[0]%modulo==k)prefix[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]%modulo==k){
                prefix[i]=1;
            }
            else prefix[i]=0;
        }
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        long long ans=0;
        for(int i=0;i<n;i++){
          sum+=prefix[i];
          int r1=sum%modulo;
          int r2=(r1-k+modulo)%modulo;
          ans+=mp[r2];
          mp[r1]++;
        }
        return ans;
        
    }
};