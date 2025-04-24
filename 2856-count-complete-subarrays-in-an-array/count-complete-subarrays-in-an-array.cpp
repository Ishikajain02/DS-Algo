class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int total=s.size();
        int left=0;
        map<int,int>mp;
       int ans=0;
        for(int right=0;right<nums.size();right++){
          mp[nums[right]]++;
          while(left<=right&&mp.size()==total){
           ans+=nums.size()-right;
           mp[nums[left]]--;
           if(mp[nums[left]]==0)mp.erase(nums[left]);
           left++;
          }
        }
        return ans;
    }
};