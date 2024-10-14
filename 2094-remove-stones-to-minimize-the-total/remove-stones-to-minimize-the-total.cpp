class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++)pq.push(piles[i]);
        while(!pq.empty() && k--){
            double val=pq.top();
            pq.pop();
            pq.push(ceil(val/2));
        }
        int score=0;
        while(!pq.empty()){
            cout<<pq.top()<<endl;
            score+=pq.top();
            pq.pop();
            
        }
        return score;
    }
};