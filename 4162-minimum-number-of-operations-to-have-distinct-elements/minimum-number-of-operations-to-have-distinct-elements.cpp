class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;
        if(mp.size()==nums.size())return 0;
        int ans=0;
        for(int i=0;i<nums.size();i+=3){
            if(mp.size()==(nums.size()-i))return ans;
            mp[nums[i]]--;
            if(mp[nums[i]]==0)mp.erase(nums[i]);
            if(i+1<nums.size()){
                mp[nums[i+1]]--;
                 if(mp[nums[i+1]]==0)mp.erase(nums[i+1]);
            }
            if(i+2<nums.size()){
                mp[nums[i+2]]--;
                if(mp[nums[i+2]]==0)mp.erase(nums[i+2]);
            }
            ans++;
        }
        return ans;
    }
};