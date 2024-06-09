class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum(nums.size(),0);
        vector<int>rightsum(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            rightsum[i]=rightsum[i+1]+nums[i+1];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};