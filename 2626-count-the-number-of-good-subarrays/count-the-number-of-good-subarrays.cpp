class Solution {
public:
    /*long long countGood(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int left=0;
        int val=0;
        int ans=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;
            if(mp[nums[right]]%2==0)val++;
            while(val>=k){
             ans+=nums.size()-right;
             if(mp[nums[left]]%2==0)val--;
             mp[nums[left]]--;
             left++;
            }
        }
        return ans;
    }
};*/
 long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int left = 0, val = 0;
        long long ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            val+=mp[nums[right]];
            mp[nums[right]]++;
          

            while (val >= k) {
                ans += nums.size() - right;
                mp[nums[left]]--;
                val-=mp[nums[left]];

                // Completely remove the element from the map if its frequency becomes 0
               
                left++;
            }
        }

        return ans;
    }
};