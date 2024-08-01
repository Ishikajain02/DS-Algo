class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            int v1=0;
            int v2=0;
            v1=details[i][11]-'0';
            v2=details[i][12]-'0';
            if(v1*10+v2>60)ans++;
        }
        return ans;
    }
};