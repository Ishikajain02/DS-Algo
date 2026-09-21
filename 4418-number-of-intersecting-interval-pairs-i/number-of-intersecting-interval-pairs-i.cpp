class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int  ans=0;
        for(int i=0;i<intervals.size()-1;i++){
            int start1 = intervals[i][0];
            int end1 = intervals[i][1];

            for (int j = i + 1; j < intervals.size(); ++j) {
                int start2 = intervals[j][0];
                int end2 = intervals[j][1];

                if (start1 <= end2 && start2 <= end1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};