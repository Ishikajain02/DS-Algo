class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
       // int count =0;
        int index =-1;
        for(int i=0;i<nums.size();i++){
              if(sum>nums[i]){
                index =i;
                //break;
            }
            sum+= nums[i];
          //  count++;
          
        }

        if(index<2)return -1;
        sum=0;
        for(int i=0;i<=index;i++){
            sum+= nums[i];
        }
        return sum;
    }
};