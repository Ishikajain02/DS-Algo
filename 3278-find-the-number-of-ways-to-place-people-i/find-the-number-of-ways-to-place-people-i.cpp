class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            for(int j=0;j<n;j++){
                int x1= points[j][0];
                int y1=points[j][1];
                  if(i==j || x>x1 || y<y1)continue;
                     bool flag =true;
                for(int k=0;k<n;k++){
                    if(k==i || k==j)continue;
                  if(points[k][0]<=x1 &&points[k][0]>=x &&points[k][1]>=y1 && points[k][1]<=y){
                      flag=false;
                  }
                // if(flag)ans++;

                }
                if(flag)ans++;
            }
        }
        return ans;
    }
};