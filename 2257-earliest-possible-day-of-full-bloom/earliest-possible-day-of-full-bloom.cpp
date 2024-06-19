class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>vc;
        for(int i=0;i<plantTime.size();i++)vc.push_back({growTime[i],plantTime[i]});
        sort(vc.rbegin(),vc.rend());
        int ans=0,bloom=0,day=0;
        for(int i=0;i<plantTime.size();i++){
            day+=vc[i].second;
            bloom=max(bloom,day+vc[i].first);
        }
        return bloom;
    }
};