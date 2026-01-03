class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
           vector<long long> prefix(n, 0);
        vector<int> suffix(n, INT_MAX);

        // prefix sum
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        suffix[n - 1] = INT_MAX;  // no element after last
        int mini = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = mini;
            mini = min(mini, nums[i]);
        }

        long long maxi = LLONG_MIN;

        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, prefix[i] - suffix[i]);
        }

        return maxi;
    }
};