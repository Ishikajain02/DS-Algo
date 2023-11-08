class Solution {
public:
    bool isPerfectSquare(int num) {
         int lNum=num%10;
        if(lNum==2 || lNum==3 || lNum==7 || lNum==8){
            return false;
        }
        int start=1;
        int end=num;
        long long int mid= start+(end-start)/2;
        while(start<=end){
            long long int res = mid*mid;
            if(res==num){
                return true;
            }else if(res>num){
                end=mid-1;
            }else if(res<num){
                start=mid+1;
            }
            mid= (start+end)>>1;
        }
        return false;
    }
};