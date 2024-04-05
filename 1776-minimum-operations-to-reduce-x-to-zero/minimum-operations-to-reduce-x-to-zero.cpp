class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        int required=totalsum-x;
        int left=0;
        int ans=0,tr=0;
        if(required==0)return nums.size();
        for(int right=0;right<nums.size();right++){
          tr+=nums[right];
          while(tr>required && left<nums.size()){
            tr-=nums[left];
            left++;
          }
          if(tr==required)
          ans=max(ans,right-left+1);
        }
        if(ans==0)return -1;
        return nums.size()-ans;
    }
};