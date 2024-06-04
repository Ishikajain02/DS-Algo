class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
     //   vector<int>ans=gifts;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push({gifts[i],i});
        }
        while(k--){
            int idx=pq.top().second;
            gifts[idx]=sqrt(pq.top().first);
            pq.pop();
            pq.push({gifts[idx],idx});
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++)sum+=gifts[i];
        return sum;
    }
};