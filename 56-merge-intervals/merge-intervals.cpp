class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end());
        vector<vector<int>>m;
         vector<int>ans=intervals[0];
         
         //ans.push_back(intervals[0]);
       
        for(int i=0;i<intervals.size();i++){
           if(ans[1]>=intervals[i][0]){
               //if(ans[[1]>=intervals[i][1]])
               ans[1]=max(ans[1],intervals[i][1]);
           }
           else{
               m.push_back(ans);
               ans=intervals[i];
           }
            
        }
        m.push_back(ans);
        return m;
    }
};