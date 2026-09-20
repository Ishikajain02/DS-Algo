class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int val=s[i]-97;
            ans+=((26-val)*(i+1));
        }
        return ans;
    }
};