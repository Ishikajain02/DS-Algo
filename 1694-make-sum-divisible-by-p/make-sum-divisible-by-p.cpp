class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        map<long,long>mp;
        long long sum=0,ans=nums.size();
        long long total_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        mp[0]=-1;
        long long target=total_sum%p;
        if(target==0)return 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            long finding=(sum-target+p)%p;
            if(mp.find(finding)!=mp.end()){
                ans=min(ans,(long long)i-mp[finding]);
            }
            mp[(sum+p)%p]=i;
        }
        if(ans==nums.size())return -1;
        return ans;
    }

};