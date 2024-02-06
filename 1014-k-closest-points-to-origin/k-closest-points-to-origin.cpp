class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>vc;
        map<double,vector<vector<int>>>mp;
        for(int i=0;i<points.size();i++){
            int x= pow(points[i][0],2);
            int y=pow(points[i][1],2);
            double dis = sqrt(x+y);
            mp[dis].push_back(points[i]);
        }
        for(auto it:mp){
            if(k==0)break;
            for(auto u:it.second){
                if(k>0){
                    vc.push_back(u);
                    k--;
                }
                else break;
            }

        }
        return vc;
    }
};