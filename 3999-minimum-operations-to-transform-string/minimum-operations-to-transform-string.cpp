class Solution {
public:
    int minOperations(string s) {
        //maxi
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='a'){
            int val='z'-s[i];
            val++;
            maxi=max(maxi,val);
            }
        }
      
        return maxi;
    }
};