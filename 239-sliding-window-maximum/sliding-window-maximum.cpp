class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //use deque and use it as a monotonic increasing stack
        deque<int>d;
       vector<int>ans;
       for(int i=0;i<nums.size();i++){
        while(!d.empty() && d.back()<nums[i])d.pop_back();
        d.push_back(nums[i]);
        if(i>=k && nums[i-k]==d.front())d.pop_front();
        if(i>=k-1)ans.push_back(d.front());
       }
       return ans;
    }
};