class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        // using concept of sliding window approach
        return fn(nums,upper+1)-fn(nums,lower);
    }
    long long fn(vector<int>&nums,int val){
        long long sum=0,ans=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            sum=nums[i]+nums[j];
            if(sum<val){
                ans+=j-i;
            i++;
            }
            else j--;
        }
        return ans;
    }
};