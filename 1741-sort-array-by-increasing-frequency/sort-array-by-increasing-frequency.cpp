class Solution {
public:
    map<int,int>mp;
   vector<int> frequencySort(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a, int b) {
            if (mp[a] == mp[b]) return a > b;
            return mp[a] < mp[b];
        });
        return nums;
    }
};