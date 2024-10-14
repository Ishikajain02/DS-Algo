class Solution {
public:
    int halveArray(vector<int>& nums) {
        int ans=0;
        double total=0;
        priority_queue<double>pq;

        for(int i=0;i<nums.size();i++){
         total+=nums[i];
         pq.push(nums[i]);
        }
        double half=(total/2.0);
        int value=0;
        while(total>half && !pq.empty()){
            double top=pq.top();
            pq.pop();
            total-=(top/2.0);
            ans++;
            pq.push(top/2.0);
        }
        return ans;
    }
};