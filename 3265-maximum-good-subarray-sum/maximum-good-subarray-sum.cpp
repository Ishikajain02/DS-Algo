class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        vector<long long> v(nums.size(), 0);
        v[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            v[i] = (v[i - 1] + nums[i]);
        }
        vector<long long>prefix=v;
        //   [1,3,6,10,14,19,25]
        //[1,6]
       /* map<int, vector<int>> mp;

        //[1->0
        // 5->1]
        // long long currsum=LONG_MIN;
        long long ans = LONG_MIN; // Use long long for large sums
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i] + k) != mp.end()) {
                for (auto it : mp[nums[i] + k]) {
                    int x = it;

                    if (x == 0)
                        ans = max(ans, v[i]);
                    else
                        ans = max(ans, v[i] - v[x - 1]);
                }
            }
            if (mp.find(nums[i] - k) != mp.end()) {
                for (auto it : mp[nums[i] - k]) {
                    int x = it;

                    if (x == 0)
                        ans = max(ans, v[i]);
                    else
                        ans = max(ans, v[i] - v[x - 1]);
                }
            }

            mp[nums[i]].push_back(i);
        }
        if (ans == LONG_MIN)
            return 0;
        return ans;*/
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