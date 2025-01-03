class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        //using the concept of max overlapping intervals
        vector<vector<int>>intervals;
        for(int i=0;i<nums.size();i++){
            vector<int>h;
            h.push_back(nums[i]-k);
            h.push_back(nums[i]+k);
            intervals.push_back(h);
        }
        sort(intervals.begin(),intervals.end());
        int ans=0;
        deque<vector<int>>dq;
        for(int i=0;i<intervals.size();i++){
            while(!dq.empty() && dq.front()[1]<intervals[i][0]){
                dq.pop_front();
            }
            dq.push_back(intervals[i]);
            int size=dq.size();
            ans=max(ans,size);

        }
        return ans;
    }
};