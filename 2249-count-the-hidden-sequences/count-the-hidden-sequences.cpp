class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        //no need of brute force just simple mathematical derivation of formula
        int maxi=0;
        int mini=0;
        int curr=0;
        for(int i=0;i<differences.size();i++){
            curr+=differences[i];
            maxi=max(maxi,curr);
            mini=min(curr,mini);
            if (maxi - mini > upper - lower) {
                return 0;
            }
        }
        return (upper-maxi)-(lower-mini)+1;
    }
};