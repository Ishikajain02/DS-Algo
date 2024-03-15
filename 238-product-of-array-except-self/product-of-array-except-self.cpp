class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        ans[0]=1;
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int pre=1;
        for(int i=nums.size()-2;i>=0;i--){
          //  ans[i]=ans[i-1]*nu
          pre*=nums[i+1];
          ans[i]=pre*ans[i];
        }
        return ans;
    }
};