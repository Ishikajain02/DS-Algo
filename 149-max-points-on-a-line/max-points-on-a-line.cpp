class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int xx=1;
        //sort()
        int ans=0;
        int ff=1;
        for(int i=0;i<points.size()-1;i++){
        unordered_map<double,int>mp;
        xx=1;
        for(int j=i+1;j<points.size();j++){
          if(points[i][0]==points[j][0])xx++;
         else{
           double val = (double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
           mp[val]++;
         }
        }
        ans=0;
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        ff=max(ff,ans+1);
        ff=max(ff,xx);
        }
     
        return ff;
    }
};