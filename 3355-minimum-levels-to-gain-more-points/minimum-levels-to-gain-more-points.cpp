class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        vector<int>prefix(possible.size());
        vector<int>suffix(possible.size());
        if(possible[0]==0)prefix[0]=-1;
        else prefix[0]=1;
        if(possible[possible.size()-1]==0)suffix[possible.size()-1]=-1;
        else suffix[possible.size()-1]=1;
        for(int i=1;i<possible.size();i++){
          if(possible[i]==0){
            prefix[i]=prefix[i-1]-1;
          }
          else prefix[i]=prefix[i-1]+1;
        }
        for(int i=possible.size()-2;i>=0;i--){
            if(possible[i]==0){
                suffix[i]=suffix[i+1]-1;
            }
            else suffix[i]=suffix[i+1]+1;
        }
        for(int i=0;i<possible.size()-1;i++){
            if(prefix[i]>suffix[i+1]){
                return i+1;
            }
        }
        return -1;
    }
};