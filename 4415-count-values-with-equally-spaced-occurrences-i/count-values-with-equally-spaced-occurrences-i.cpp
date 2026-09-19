class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto it:mp){
            if(it.second.size()==3){
                int first=it.second[1]-it.second[0];
                int second=it.second[2]-it.second[1];
                if(first==second)ans++;
            }
        }
        return ans;
    }
};