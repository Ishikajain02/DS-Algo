class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
       //first horizontal cuts if posible then consider vertical cuts
       // considering first horizontal slices components
  // sort(rectangles.begin(),rectangles.end());
   //similar to merge intervals
  vector<pair<int,int>>vertical;
  vector<pair<int,int>>horizontal;
   n=rectangles.size();
  for(int i=0;i<n;i++){
    vertical.push_back({rectangles[i][0],rectangles[i][2]});
  }
  for(int i=0;i<n;i++){
    horizontal.push_back({rectangles[i][1],rectangles[i][3]});
  }
  sort(vertical.begin(),vertical.end());
  sort(horizontal.begin(),horizontal.end());
  int end1=vertical[0].second;
  int end2=horizontal[0].second;
  int cnt=1;
  for(int i=1;i<n;i++){
    if(end1<=vertical[i].first)cnt++;
    end1=max(end1,vertical[i].second);
  }
  if(cnt>=3)return true;
  cnt=1;
  for(int i=1;i<n;i++){
    if(end2<=horizontal[i].first)cnt++;
    end2=max(end2,horizontal[i].second);
  }
  return (cnt>=3);

    }
};