class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int unique;
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            mp2[it.second]++;
        }
       for(int i=0;i<nums.size();i++){
        if(mp2[mp[nums[i]]]==1)return nums[i];
       }
       return -1;
    }
};