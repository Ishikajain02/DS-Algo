class Solution {
public:
    bool check(vector<int>& nums) {
       int cnt=0;
       int idx=0;
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            cnt++;
            idx=i+1;
        }
       } 
       if(cnt>1)return false;
       if(cnt==1){
        for(int i=idx;i<nums.size()-1;i++){
           if(nums[i]>nums[i+1])return false;
        }
        if(nums[nums.size()-1]>nums[0])return false;
       }
       return true;
    }
};