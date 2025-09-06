class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=0;
        for(int i=0;i<rocks.size();i++){
            rocks[i]=capacity[i]-rocks[i];
        }
        sort(rocks.begin(),rocks.end());
        for(int i=0;i<rocks.size();i++){
           
             if(0==rocks[i]){
                   ans++;
            }
               
             else  if (additionalRocks >=rocks[i]) {   
                    additionalRocks -= rocks[i];
                    
                   ans++;
                }
            
           
            
            
        }
        return ans;
    }
};