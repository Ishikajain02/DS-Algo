class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        vector<long long> v(nums.size(), 0);
        v[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            v[i] = (v[i - 1] + nums[i]);
        }
        vector<long long>prefix=v;
       
        int n=nums.size();
        unordered_map<long long,long long>mp;
        mp[nums[0]]=0;
        long long ans=-1e15;
        
        for(int i=1;i<n;i++)
        {
            int detail1=nums[i]-k;
            int detail2=nums[i]+k;
            if(mp.find(detail1)!=mp.end())
            {
                ans=max(ans,prefix[i]-mp[detail1]);
            }
            if(mp.find(detail2)!=mp.end())
            {
                ans=max(ans,prefix[i]-mp[detail2]);
            }
            //to store nums[i] in map
            //we want mp[nums[i]] to be minimum so that our answer is maximum
            if(mp.find(nums[i])!=mp.end())
            {
                //we are storing sum in mp[nums[i]] so that we can directly get sum we have used above to find max for answer
                mp[nums[i]]=min(mp[nums[i]],prefix[i-1]);
            }
            else
            {
                mp[nums[i]]=prefix[i-1];
            }
        }
        return ans==-1e15?0:ans;
    }
};