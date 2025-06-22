class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            bool tt=true;
            for(int i=2;i<it.second;i++){
                if(it.second%i==0){
                    tt=false;
                    break;}
            }
            if(tt && it.second!=1)return tt;
        }
        return false;
    }
};