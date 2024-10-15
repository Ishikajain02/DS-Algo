class Solution {
public:
    long long minimumSteps(string s) {
        //no of zero before 1
        long long zero=0,ans=0; 
        for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1')ans+=zero;
        else zero++;
        }
        return ans;
    }
};