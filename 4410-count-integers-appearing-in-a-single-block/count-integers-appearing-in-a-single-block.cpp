class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto it:mp){
            bool flag=true;
            for(int i=0;i<it.second.size()-1;i++){
                if(it.second[i+1]-it.second[i]>1){
                    flag=false;
                    break;
                }

            }
            if(flag)ans++;
        }
        return ans;
    }
};