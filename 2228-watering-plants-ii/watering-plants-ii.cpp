class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int refill=0;
        int orA=capacityA;
        int oriB=capacityB;
        int left=0,right=plants.size()-1;
        while(left<=right){
            if(left==right){
             if(capacityA<plants[left] && capacityB<plants[left])refill++;
               // else refill++;
            }
            else{
            if(plants[left]>capacityA){
                refill++;
                capacityA=orA;
            }
            if(plants[left]<=capacityA){
                capacityA-=plants[left];
            }
            if(plants[right]>capacityB){
                refill++;
                capacityB=oriB;
            }
            if(plants[right]<=capacityB){
                capacityB-=plants[right];
            }
            }
            left++;
            right--;
        }
        return refill;
    }
};