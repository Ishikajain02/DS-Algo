class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        // consider that  every bomb will explode one time in a decade
        int maxi = 0;
        int n = bombs.size();
        for (int i = 0; i < n; i++) {
            queue<int> q;
            int cnt = 1;
            vector<int> vis(n, false);
            q.push(i);
            while (!q.empty()) {
                int idx = q.front();
                int x = bombs[idx][0];
                int y = bombs[idx][1];
                int r = bombs[idx][2];
                vis[idx] = true;
                q.pop();
                for (int j = 0; j < n; j++) {
                   if (idx != j) {
                        if (!vis[j]) {
                            int rx = bombs[j][0];
                            int ry = bombs[j][1];
                            int rr = bombs[j][2];
                            long long dis = (long long)(x - rx) * (x - rx) + (long long)(y - ry) * (y - ry);
                            if (dis <=(long long) r * r) {
                                vis[j] = true;
                                q.push(j);
                                cnt++;
                            }
                        }
                    }
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};