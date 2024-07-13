class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths, string directions) {
        vector<pair<int, pair<int, pair<char, int>>>> vc;
        for (int i = 0; i < positions.size(); i++) {
            vc.push_back({positions[i], {healths[i], {directions[i], i}}});
        }
        sort(vc.begin(), vc.end());
        stack<pair<int, pair<int, pair<char, int>>>> st;
        for (int i = 0; i < vc.size(); i++) {
            if (!st.empty()) {
                if (vc[i].second.second.first == 'L' &&
                    st.top().second.second.first == 'R') {

                    if (vc[i].second.first > st.top().second.first) {
                        while (!st.empty() &&
                               vc[i].second.first > st.top().second.first 
                               &&st.top().second.second.first == 'R') {
                            st.pop();
                            vc[i].second.first -= 1;
                        }if(st.empty() || st.top().second.second.first==vc[i].second.second.first) st.push(vc[i]);
                        else if (st.top().second.second.first=='R' && vc[i].second.second.first=='L' && st.top().second.first==vc[i].second.first)st.pop();

                        else if(st.top().second.second.first=='R'){
                            st.top().second.first-=1;
                        }
                       
                       
                    } else if (vc[i].second.first == st.top().second.first) {
                        st.pop();
                    } else {
                        st.top().second.first -= 1;
                    }
                } else {
                    st.push(vc[i]);
                }
            } else {
                st.push(vc[i]);
            }
        }
        // position health
        vector<pair<int, int>> ans(st.size());
        int j = st.size() - 1;
        cout << j << endl;
        while (!st.empty()) {
            ans[j].first = st.top().second.second.second;
            ans[j].second = st.top().second.first;
            st.pop();
            j--;
        }
        sort(ans.begin(), ans.end());
        vector<int> god;
        for (int i = 0; i < ans.size(); i++) {
            god.push_back(ans[i].second);
        }

        return god;
    }
};