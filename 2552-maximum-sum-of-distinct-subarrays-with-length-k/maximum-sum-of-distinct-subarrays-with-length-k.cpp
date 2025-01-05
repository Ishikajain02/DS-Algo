class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        //subarray length is k
        //distinct character
        long long sum=0;
      //  set<int>s;
        int left=0;
        int len=0;
        long long f=0;
        map<int,int>mp;
        for(int right=0;right<nums.size();right++){
            len=right-left+1;
            sum+=nums[right];
          //  s.insert(nums[right]);
            mp[nums[right]]++;
            while(len>k && left<nums.size()){
                sum-=nums[left];
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                 //   s.erase(nums[left]);
                }
                left++;
                len=right-left+1;
            }
            if(len==k && mp.size()==k)f=max(sum,f);
        }
        return f;
    }
};