class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int m1=nums[0],m2=INT_MAX,m3=INT_MAX;
        for(int i=nums.size()-1;i>0;i--){
           if(nums[i]<=m2){
            m3=m2;
            m2=nums[i];
           }
           else if(nums[i]<=m3){
            m3=nums[i];
           }

        }
        return m1+m2+m3;
    }
};