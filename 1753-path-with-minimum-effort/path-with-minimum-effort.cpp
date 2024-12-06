class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {0, 0}});
        ans[0][0] = 0;

        while (!pq.empty()) {
            int d = pq.top().first;  // current max effort so far
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            // If we reached the bottom-right corner, return the result
            if (x == n - 1 && y == m - 1) {
                return d;
            }

            // Process the four directions: down, up, right, left
            if (x + 1 < n) {  // down
                int newEffort = abs(heights[x + 1][y] - heights[x][y]);
                if (max(d, newEffort) < ans[x + 1][y]) {
                    ans[x + 1][y] = max(d, newEffort);
                    pq.push({ans[x + 1][y], {x + 1, y}});
                }
            }

            if (x - 1 >= 0) {  // up
                int newEffort = abs(heights[x - 1][y] - heights[x][y]);
                if (max(d, newEffort) < ans[x - 1][y]) {
                    ans[x - 1][y] = max(d, newEffort);
                    pq.push({ans[x - 1][y], {x - 1, y}});
                }
            }

            if (y + 1 < m) {  // right
                int newEffort = abs(heights[x][y + 1] - heights[x][y]);
                if (max(d, newEffort) < ans[x][y + 1]) {
                    ans[x][y + 1] = max(d, newEffort);
                    pq.push({ans[x][y + 1], {x, y + 1}});
                }
            }

            if (y - 1 >= 0) {  // left
                int newEffort = abs(heights[x][y - 1] - heights[x][y]);
                if (max(d, newEffort) < ans[x][y - 1]) {
                    ans[x][y - 1] = max(d, newEffort);
                    pq.push({ans[x][y - 1], {x, y - 1}});
                }
            }
        }

        return ans[n - 1][m - 1];  // return the minimum maximum effort to reach the destination
    }
};
