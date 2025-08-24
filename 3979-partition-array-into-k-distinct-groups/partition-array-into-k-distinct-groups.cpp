class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        bool flag=false;
        if(n%k!=0)return false;
        if(n==k)flag=true;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(flag==true && it.second>1)return false;
            if(it.second>(n/k) && k!=1 )return false;
        }
        return true;

    }
};