class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=INT_MIN;
        for(int i=0;i<colors.size()-1;i++){
            int j=colors.size()-1;
            for(j;j>=0;j--){
                if(colors[i]!=colors[j]){
                    int val=j-i;
                    maxi=max(maxi,val);
                    break;
                }
            }
        }
        return maxi;
    }
};