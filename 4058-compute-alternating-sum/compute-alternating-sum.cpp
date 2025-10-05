class Solution {
public:
    int alternatingSum(vector<int>& nums) {
     //adding even numbers and subtracting odd ones
     int sum=0,sum1=0;
     for(int i=0;i<nums.size();i++){
        if(i%2==0)sum+=nums[i];
        else sum1+=nums[i];
     }   
     return sum-sum1;
    }
};