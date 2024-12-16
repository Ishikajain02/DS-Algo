class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++)pq.push({nums[i],i});
        while(k--){
   int f=pq.top().first;
  int ind=pq.top().second;
  f*=multiplier;
  pq.pop();
  pq.push({f,ind});
        }
        while(!pq.empty()){
            nums[pq.top().second]=pq.top().first;
            pq.pop();
        }
        return nums;
    }
};