class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            string num=to_string(nums[i]);
            sort(num.begin(),num.end());
            if(num.size()>1){
                maxi=max(maxi,num[num.size()-1]-num[0]);
                mp[i]=num[num.size()-1]-num[0];
            }
            if(num.size()==1){
                mp[i]=0;
            }
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==maxi)ans+=nums[it.first];
        }
        return ans;
    }
};