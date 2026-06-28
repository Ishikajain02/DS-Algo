class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(),nums.rend());
        long long sum=0;
        long long index;
        if(abs(mul-k-1)>0){
            if(mul-1<k){
               index=mul;
            }
        }
        for(long i=0;i<k;i++){
            if(mul==0 || mul<0)break;
                sum+=(1LL*mul*nums[i]);
                mul--;
        }
        if(mul-1<k){
            for(long i=index;i<k;i++){
                sum+=nums[i];
            }
        }
        return sum;
    }
};