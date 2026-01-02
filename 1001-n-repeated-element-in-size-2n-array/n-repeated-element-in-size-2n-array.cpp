class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int num=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==num)return it.first;
        }
        return -1;
    }
};