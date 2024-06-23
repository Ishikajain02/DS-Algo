class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int,int>mp;
        int left=0,len=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            auto it=mp.begin();
            auto it2=mp.rbegin();
            while(it2->first-it->first>limit){
               mp[nums[left]]--;
               if(mp[nums[left]]==0)mp.erase(nums[left]);
               it=mp.begin();
               it2=mp.rbegin();
               left++;
            }
            len=max(len,right-left+1);
        }
        return len;
    }
};