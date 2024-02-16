class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n=nums.size();
        int m= pattern.size();
        int count=0;
        for(int i=0;i<n-m;i++){
         int j=0;
         for(j=0;j<m;j++){
             if(pattern[j]==1){
                 if(nums[i+j+1]<=nums[i+j])break;
             }
             else if (pattern[j]==0){
                 if(nums[i+j+1]!=nums[i+j])break;
             }
             else{
                 if(nums[i+j+1]>=nums[i+j])break;
             }
         }
         if(j==m)count++;
        }
        return count;
    }
};