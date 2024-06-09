class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          int mod=sum%k;
          if(mod<0){
            mod+=k;
          }
          if(mp.find(mod)!=mp.end()){
            cnt+=mp[mod];
            mp[mod]++;
          }
          else mp[mod]++;
        }
        return cnt;
    }
};