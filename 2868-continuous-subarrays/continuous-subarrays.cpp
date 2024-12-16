class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int left=0,right=0;
        long long ans=0;
        while(right<nums.size()){
            mp[nums[right]]++;
            int mini=mp.begin()->first;
            int maxi=mp.rbegin()->first;
            while((maxi-mini)>2 && left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
                  mini=mp.begin()->first;
             maxi=mp.rbegin()->first;
            }
            ans+=(right-left+1);
            right++;
        }
        return ans;
    }
};