class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int applesum=0;
        for(int i=0;i<apple.size();i++){
            applesum+=apple[i];
        }
        int prev=0,result=0;
       for(int i=0;i<capacity.size();i++){
          prev=capacity[i];
           if(prev<applesum){
               result++;
               applesum-=prev;
           }
           else{
               result++;
               break;
           }
       }
        return result;
    }
};