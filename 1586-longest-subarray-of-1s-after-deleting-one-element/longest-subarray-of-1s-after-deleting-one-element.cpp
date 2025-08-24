class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int sum=0,left=0,len=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0)sum++;
            while(sum>1){
                if(nums[left]==0)sum--;
                left++;
        }
        len=max(len,right-left);
        }
        return len;
    }
};