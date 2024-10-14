class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)pq.push(nums[i]);
        long long score=0;
        while(!pq.empty() && k--){
           score+=pq.top();
           double val=pq.top();
           pq.pop();
           pq.push(ceil(val/3));
        }
        return score;
    }
};