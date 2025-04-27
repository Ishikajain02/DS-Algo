class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        //first and last is equal to the half of second one
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-2;i++){
            int a=nums[i];
            int c=nums[i+2];
            int b=nums[i+1];
            double sum=ceil(b/2.0);
              if (b % 2 != 0) continue;
           if(a+c==sum)ans++;
        }
        return ans;
    }
};