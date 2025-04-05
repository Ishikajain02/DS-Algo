class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        //simple concept of diif array for optimisation purposes
        vector<int>pa(1002,0);
        for(int i=0;i<trips.size();i++){
            pa[trips[i][1]]+=trips[i][0];
            pa[trips[i][2]]-=trips[i][0];
        }
        int ans=0;
        for(int i=0;i<pa.size();i++){
            ans+=pa[i];
            if(ans>capacity)return false;
        }
        return true;
    }
};