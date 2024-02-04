class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        auto cmp =[](vector<int>&a ,vector<int>&b){
        if(a[0]==b[0])return a[1]>b[1];
        return a[0]<b[0];
        };
        int n=points.size();
        int ans=0;
        sort(points.begin(),points.end(),cmp);
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int k=  INT_MIN;
            for(int j=i+1;j<n;j++){
                int x1= points[j][0];
                int y1=points[j][1];
                  if(y1>y)continue;
                 if(y1>k){
                     ans++;
                     k=y1;
                 }
                // if(flag)ans++;

                }
               
            }
        
        return ans;
    }
};