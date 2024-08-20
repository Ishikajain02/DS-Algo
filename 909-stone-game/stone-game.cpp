class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int start=0,end=piles.size()-1;
        bool to=true;
        int alice=0,bob=0;
        while(start<end){
            if(piles[start]>=piles[end]){
               if(to){
                alice+=piles[start];
                to=false;
                start++;
               }
               else {
                to=true;
                bob+=piles[end];
                end--;
               }
               //start++;
            }
            else{
                if(to){
                alice+=piles[end];
                to=false;
                end--;
               }
               else {
                to=true;
                bob+=piles[start];
                start++;
               }
               //end--;
            }
        }
        if(alice>bob)return true;
        return false;
    }
};