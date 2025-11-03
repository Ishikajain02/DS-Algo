class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int ans = 0;
        std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
        for(int i =0;i<c.size();i++){
            if(min_pq.empty()){
                min_pq.push(nt[i]);
            } else if(c[i]==c[i-1]){
                min_pq.push(nt[i]);
                ans += min_pq.top();
                min_pq.pop();
            } else {
                min_pq.pop();
                min_pq.push(nt[i]);
            }
        }
        return ans;
    }
};