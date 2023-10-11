class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
       for(int i = 0 ; i < nums.size(); i++){    
            sort(nums[i].begin(), nums[i].end());
            
        }

        for (int i = 0; i < nums[0].size(); i++) {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++) {
                cnt = max(cnt, nums[j][i]);
            }
            ans += cnt;
        }

        return ans;
    }
};
