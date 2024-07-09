class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double waiting=0;
        int curr=customers[0][0];
        for(int i=0;i<customers.size();i++){
            if(curr>=customers[i][0]){
              curr+=customers[i][1];
              waiting+=(curr-customers[i][0]);
            }
            else{
                curr=customers[i][0];
                curr+=customers[i][1];
              waiting+=(curr-customers[i][0]);

            }
        }
        return waiting/customers.size();
    }
};