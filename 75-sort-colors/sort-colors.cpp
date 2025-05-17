class Solution {
public:
    void sortColors(vector<int>& nums) {
        //red blue and white
        int zero=0,one=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)one++;
            if(nums[i]==0)zero++;
        }
        for(int i=0;i<n;i++){
            if(zero>0){
                nums[i]=0;
                zero--;
            }
            else if(one>0){
                one--;
                nums[i]=1;
            }
            else nums[i]=2;
        }
     //   return nums;
    }
};