class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       //return minimum minutes difference between any two points
      vector<int>ans;
      for(int i=0;i<timePoints.size();i++){
        int time=stoi(timePoints[i].substr(0,2))*60 + stoi(timePoints[i].substr(3,2));
        if(time<60){
            time=24*60+time;
        }
        ans.push_back(time);
      }
      sort(ans.begin(),ans.end());
      int mini=INT_MAX;
      for(int i=1;i<timePoints.size();i++){
        mini=min(ans[i]-ans[i-1],mini);
      }
      int n=timePoints.size();
      mini=min(24*60-ans[n-1]+ans[0],mini);
      //if(mini>=720)mini=1440-mini;
      for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
      return mini;
    }
};