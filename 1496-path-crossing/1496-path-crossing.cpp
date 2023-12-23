class Solution {
public:
    bool isPathCrossing(string path) {
       int x = 0, y = 0;
        unordered_map<string, bool> mp;

        vector<vector<int>> v;
        for (int i = 0; i < path.length(); i++) {
             string key = to_string(x) + "," + to_string(y);
            if (mp.find(key) != mp.end()) {
                return true;
            }

            mp[key] = true;
            if (path[i] == 'N') {
                y++;
            } else if (path[i] == 'S') {
                y--;
            } else if (path[i] == 'E') {
                x++;
            } else if (path[i] == 'W') {
                x--;
            }
         
            
        }
         string key = to_string(x) + "," + to_string(y);
            if (mp.find(key) != mp.end()) {
                return true;
            }

            mp[key] = true;
        return false;
       }
};