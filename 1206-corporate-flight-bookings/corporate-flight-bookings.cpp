class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        //simple concept of diff array
        vector<int>vc(n,0);
        for(int i=0;i<bookings.size();i++){
            int f=bookings[i][0];
            int l=bookings[i][1];
            int s=bookings[i][2];
            vc[f-1]+=s;
            if(l<n){
             vc[l]-=s;
            }
        }
        vector<int>ans;
        ans.push_back(vc[0]);
        for(int i=1;i<n;i++){
        ans.push_back(ans.back()+vc[i]);
        }
        return ans;
    }
};