class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
   // set<int> usedHeights;
      long long ans = 0;
      
        sort(maximumHeight.rbegin(), maximumHeight.rend());
        int curr=maximumHeight[0];
        for (int height : maximumHeight) {  
          if(curr==0)return -1;
          int temp=min(height,curr);
          ans+=temp;
          curr=temp-1;
        
        }
        return ans; 
    }
};