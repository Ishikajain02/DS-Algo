class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
       if(n%2==0){
int num=n/2;
       int i=0;
       while(i<n){
          ans.push_back(num);
          ans.push_back(-num);
          num--;
          i+=2;
       }
       }
       else{
        int num=n/2;
        int i=0;
        while(i<n-1){

            ans.push_back(-num);
            ans.push_back(num);
            num--;
            i+=2;
        }
       ans.push_back(0);
       }
       return ans;
    }
};