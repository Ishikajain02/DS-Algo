class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
         if(nums[i]>0)continue;
        else if(nums[i]==0){
             return 0;
             break;
         }
         else if(nums[i]<0)sum++;
        }
        
        if(sum%2!=0)return -1;
        
        return 1;
    }
};