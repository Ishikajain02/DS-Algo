class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev =0,ans=0;
        for(int i=0;i<bank.size();i++){
           int device = count(bank[i].begin(),bank[i].end(),'1');
         if(device>0){
          ans += device*prev;
           prev = device;
         }
        }
        return ans;
    }
};