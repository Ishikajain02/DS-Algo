class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=0;
        long long cnt=0;
        int lastmax=-1,lastmin=-1;
        for(int right=0;right<nums.size();right++){
            if(nums[right]>maxK || nums[right]<minK){
                left=right+1;
                lastmin=-1;
                lastmax=-1;
            }
            
            if(nums[right]==minK){
                lastmin=right;
            }
            if(nums[right]==maxK){
                lastmax=right;
            }
            if(lastmax !=-1 && lastmin!=-1){
                cnt+=(min(lastmin,lastmax)-left+1);
            }
            }
        
        return cnt;
    }
};