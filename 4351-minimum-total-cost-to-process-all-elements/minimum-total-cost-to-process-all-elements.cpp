class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long ans = 0;
        long long cost = 0;
        long long res = k;
        const long long MOD = 1000000007;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] <= k) {
                k -= nums[i];
            }
            else {
                int need = nums[i] - k;

                long long val = (need + res - 1) / res;

                k += val * res;
                k -= nums[i];

                cost += val;
            }
        }

        ans = (cost % MOD) * ((cost + 1) % MOD) % MOD;
        ans = ans * 500000004 % MOD;

        return ans;
    }
};
