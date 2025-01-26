class Solution {
public:
    int countPartitions(vector<int>& nums) {
        //count the number of partitions where the difference between sum of left and right subrray  is even
        int ans=0;
        vector<int>prefix(nums.size(),0);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
          prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(((prefix[nums.size()-1]-prefix[i])-prefix[i])%2==0)ans++;
        }
        return ans;
    }
};