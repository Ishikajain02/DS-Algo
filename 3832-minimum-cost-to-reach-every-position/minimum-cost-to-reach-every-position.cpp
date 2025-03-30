class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>vc;
        int sub=cost[0];
        for(int i=0;i<cost.size();i++){
            sub=min(sub,cost[i]);
            vc.push_back(sub);
        }
        return vc;
    }
};