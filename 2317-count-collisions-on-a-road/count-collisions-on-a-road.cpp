class Solution {
public:
    int countCollisions(string directions) {
       // R-L
       int ans=0;
       int n=directions.size()-1;
       int i=0,j=n;
       while(i<directions.size() && directions[i]=='L')i++;
       while(j>=0&& directions[j]=='R')j--;
       for(int k=i;k<=j;k++){
        if(directions[k]!='S')ans++;
       }
       return ans;
    }
};