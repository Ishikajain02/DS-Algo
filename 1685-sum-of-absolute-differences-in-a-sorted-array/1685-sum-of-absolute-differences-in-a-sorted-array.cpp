class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>ans;
        int sum =0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        int lsum=0;
        int index=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int rsum = sum-lsum-nums[i];
            
            int t = rsum-(nums[i]*index) + ((nums[i]*i)-lsum);
            ans.push_back(t);
            index--;
            lsum+=nums[i];
        }
        return ans;
    }
};