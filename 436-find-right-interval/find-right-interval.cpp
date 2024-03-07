class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int, int> mp;
        for (int i = 0; i < intervals.size(); i++) {
            mp.insert({intervals[i][0], i});
        }
        vector<int> ans;
        for (int i = 0; i < intervals.size(); i++) {
            int b = false;
            for (auto it : mp) {
                if (it.first >= intervals[i][1]) {
                    ans.push_back(it.second);
                    b = true;
                    break;
                }
            }
            if (!b)
                ans.push_back(-1);
        }
        return ans;
    }
};