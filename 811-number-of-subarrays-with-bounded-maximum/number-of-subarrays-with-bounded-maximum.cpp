class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left_bound, int right_bound) {
        
         int ans = 0;
        int start = 0; 
        int count = 0; 

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] >= left_bound && nums[i] <= right_bound) {
                count = i - start + 1;
                ans += count;
            } else if (nums[i] < left_bound) {
                ans += count;
            } else {
                start = i + 1;
                count = 0;
            }
        }

        return ans;
    }
};