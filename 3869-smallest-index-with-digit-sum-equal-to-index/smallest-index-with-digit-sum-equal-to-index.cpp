class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        //sum of nums is equal to the index value
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            string s=to_string(nums[i]);
            for(int j=0;j<s.size();j++)sum+=(s[j]-'0');
            if(sum==i)return i;
        }
        return -1;
    }
};