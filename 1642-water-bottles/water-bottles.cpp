class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int temp=numExchange;
        while(numBottles>=temp){
        ans+=numBottles/temp;
        numBottles=(numBottles/temp) + (numBottles%temp);
        }
        return ans;
    }
};