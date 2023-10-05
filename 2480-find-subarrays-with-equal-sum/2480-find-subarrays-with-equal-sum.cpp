class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>mp;
        int sum =0;
        for(int i=1;i<nums.size();i++){
         sum = nums[i-1] + nums[i];
         if(i>=2 && mp.count(sum)>0){
             return true;
         }
         mp.insert(sum);
        }
        return false;
    }
};