class Solution {
public:
    int minAddToMakeValid(string s) {
        //number of closing brackets to be added
        int total=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')total++;
            else total--;
            if(0>total){
                ans++;
                total++;
            }

        }
        ans+=total;
        return ans;
    }
};