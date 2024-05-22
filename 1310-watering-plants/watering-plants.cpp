class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int total=capacity;
        for(int i=0;i<plants.size();i++){
            if(capacity<plants[i]){
               steps+=(i);
               steps+=i;
                capacity=total;
            }
            
            steps++;
            capacity-=plants[i];
        }
        return steps;
    }
};