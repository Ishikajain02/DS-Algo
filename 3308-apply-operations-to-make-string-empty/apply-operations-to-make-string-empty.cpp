class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mp2[s[i]]=i;
        }
        int maxi=INT_MIN;
        for(auto it:mp1){
            maxi=max(it.second,maxi);
        }
        vector<char>ans;
        for(auto it:mp1){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }
        vector<pair<int,char>>vc;
        for(int i=0;i<ans.size();i++){
            vc.push_back({mp2[ans[i]],ans[i]});
        }
        sort(vc.begin(),vc.end());
        string a;
        for(auto it:vc){
            a+=it.second;
        }
        return a;
    }
};