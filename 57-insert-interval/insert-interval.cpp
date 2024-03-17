class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>vc;
        int i=0;
        while(i<intervals.size()&&intervals[i][0]<newInterval[0]){
            vc.push_back(intervals[i]);
            i++;
        }
        vc.push_back(newInterval);
        while(i<intervals.size()){
            vc.push_back(intervals[i]);
            i++;
        }
        vector<vector<int>>ans;
        sort(vc.begin(),vc.end());
        vector<int>m=vc[0];
        for(int i=0;i<vc.size();i++){
          if(m[1]<vc[i][0]){
            ans.push_back(m);
            m=vc[i];
          }
          else {
            m[1]=max(m[1],vc[i][1]);
          }
        }
        ans.push_back(m);
        return ans;
    }
};