class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
      
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                int len = j - i + 1;

                // Check if the current subarray length is within range
                if (len >= l && len <= r && sum>0) {
                    mini = min(mini, sum);
                    cout << "Subarray [" << i << ", " << j << "]: Sum = " << sum << ", Min = " << mini << endl;
                }

                // Break if the length exceeds the upper bound
                if (len > r) break;
            }
        }
       if(mini==INT_MAX)return -1;
       return mini;
    }
};