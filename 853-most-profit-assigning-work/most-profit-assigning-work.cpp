class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>vc;
        for(int i=0;i<difficulty.size();i++){
            vc.push_back({difficulty[i],profit[i]});
        }
        sort(vc.begin(),vc.end());
        sort(worker.begin(),worker.end());
        int pro=0;
        int j=0, u=0;
        for(int i=0;i<worker.size();i++){
            
            while(j<vc.size()&& vc[j].first<=worker[i]){
              u=max(u,vc[j].second);
              j++;
            }
            pro+=u;
        }
      return pro;
    }
};