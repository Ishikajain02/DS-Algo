class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ans=INT_MAX;
        int ones=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)ones++;
            nums.push_back(nums[i]);
        }
        if(ones==0)return 0;
        int zeros=0,left=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0)zeros++;
            while(right-left+1>=ones && right<nums.size()){
                ans=min(ans,zeros);
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
        }
        return ans;

    }
};