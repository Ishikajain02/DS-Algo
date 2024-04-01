class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left=0;
        int odd=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]%2!=0)odd++;
          while(odd>k ){
         if(nums[left]%2!=0){
           odd--;
         }
         
           left++;
          }
          sum+=right-left+1;
        }
        left=0;
        int sum2=0;
        int odd2=0;
         for(int right=0;right<nums.size();right++){
            if(nums[right]%2!=0)odd2++;
          while(odd2>k-1 ){
         if(nums[left]%2!=0){
           odd2--;
         }
         
           left++;
          }
          sum2+=right-left+1;
        }
        return sum-sum2 ;
    }
};