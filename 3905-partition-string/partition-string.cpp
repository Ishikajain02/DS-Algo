class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string>vc;
        map<string,int>mp;
        string f="";
        for(int i=0;i<s.size();i++){
            f+=s[i];
            if(mp.find(f)==mp.end()){
                mp[f]++;
                vc.push_back(f);
                f="";
            }
            
        }
        return vc;
    }
};