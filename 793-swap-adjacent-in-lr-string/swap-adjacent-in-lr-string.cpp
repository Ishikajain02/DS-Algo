class Solution {
public:
    bool canTransform(string start, string result) {
        int i=0,j=0;
        int n=start.size();
        while(i<n || j<n){
            while(start[i]=='X')i++;
            while(result[j]=='X' )j++;
            if(i==n || j==n)break;
          if(start[i]==result[j]){
                if(start[i]=='L' && i<j)return false;
                if(start[i]=='R' && i>j)return false;
          }
            else return false;
            i++;
            j++;
        }
        if(i==n && j==n)return true;
        return false;
    }
};