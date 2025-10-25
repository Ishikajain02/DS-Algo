class Solution {
public:
    int totalMoney(int n) {
        int dailysum =0;
        int week =0;
        int total =0;
        for(int day =1;day<=n;day++){
            if(day%7==1){
                week++;
            dailysum = week;
            }
            else dailysum++;
            total+=dailysum;
    }
        return total;
    }
};