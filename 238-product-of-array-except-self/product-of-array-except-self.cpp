class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size(),1);
       // vector<int>suf(nums.size());
        int pro=1;
        for(int i=0;i<nums.size();i++){
            pre[i]*=pro;
            pro*=nums[i];
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--){
            pre[i]*=pro;
            pro*=nums[i];
        }
        return pre;
    }
};