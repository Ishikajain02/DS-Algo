class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int ans=0;
        while(pq.size() &&pq.top()<k){
            long minnum=pq.top();
            pq.pop();
            long min2 = pq.top();
            pq.pop();
            pq.push(2*minnum + min2);
            ans++;
        }
        return ans;
    }
};