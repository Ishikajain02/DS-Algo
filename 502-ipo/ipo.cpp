class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>vc;
        for(int i=0;i<profits.size();i++){
            vc.push_back({capital[i],profits[i]});
        }
        sort(vc.begin(),vc.end());
        priority_queue<int>pq;
        int i=0;
        while(k--){
            while(i<profits.size() && vc[i].first<=w){
                pq.push(vc[i].second);
                i++;
            }
            if(pq.empty())break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};