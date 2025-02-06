class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int pro=nums[i]*nums[j];
                mp[pro]++;
            }
        }
        for(auto it:mp){
            if(it.second>=2){
                ans+=(it.second*(it.second-1))/2;
            }
        }
        return ans*8;
    }
};