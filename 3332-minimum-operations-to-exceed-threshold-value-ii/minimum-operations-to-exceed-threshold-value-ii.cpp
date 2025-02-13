class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int ans=0;
        while(pq.size()>=2){
            long long ele=pq.top();
            pq.pop();
            long long ele2=pq.top();
            pq.pop();
            if(ele<k || ele2<k){
                long long ans2=(min(ele,ele2)*2)+max(ele,ele2);
                pq.push(ans2);
                ans++;
            }
            else break;
        }
        return ans;
    }
};