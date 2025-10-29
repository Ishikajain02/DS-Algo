class Solution {
public:
    int smallestNumber(int n) {
        int ans=0;
        for(int i=0;i<n;i++){
            if(pow(2,i)>n){
                ans=pow(2,i)-1;
                break;
            }
        }
        if(ans==0)return 1;
        return ans;
    }
};