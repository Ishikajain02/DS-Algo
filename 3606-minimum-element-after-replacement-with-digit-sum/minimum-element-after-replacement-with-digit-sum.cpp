class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            string num=to_string(nums[i]);
            int sum=0;
            for(int j=0;j<num.size();j++){
               sum+=(num[j]-'0');
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};