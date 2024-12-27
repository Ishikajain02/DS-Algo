class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        //works greedily
        int maxi=INT_MIN;
        int first=values[0];
        for(int i=1;i<values.size();i++){
            maxi=max(maxi,first+values[i]-i);
            first=max(first,values[i]+i);
        }
        return maxi;
    }
};