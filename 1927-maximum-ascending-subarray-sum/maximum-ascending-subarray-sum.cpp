class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(sum,maxi);
            if(nums[i]<nums[i+1]){
                sum+=nums[i+1];
                maxi=max(sum,maxi);
            }
            else sum=nums[i+1];
            //cout<<maxi<<endl;
           // cout<<sum<<endl;
        }
        maxi=max(sum,maxi);
        return maxi;
    }
};