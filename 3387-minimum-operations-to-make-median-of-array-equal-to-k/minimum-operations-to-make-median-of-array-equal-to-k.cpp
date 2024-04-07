class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m=(nums.size()/2);
        long long ans=abs(nums[m]-k);
        for(int i=0;i<m;i++){
        if(nums[i]>k){
            ans+=abs(nums[i]-k);
        }

        }
        for(int j=m+1;j<nums.size();j++){
            if(nums[j]<k){
                ans+=abs(nums[j]-k);
            }
        }
        return ans;
    }
};