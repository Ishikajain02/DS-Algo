class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int numzero=0;
        int ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                numzero++;
            }
            while(numzero>k){
                if(nums[left]==0)numzero--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};