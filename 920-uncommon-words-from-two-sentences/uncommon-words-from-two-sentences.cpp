class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp;
        for(int i=0;i<s1.size();i++){
            string make="";
            int j=i;
            while(s1[j]!=' ' && j<s1.size()){
                make+=s1[j];
                j++;
            }
            i=j;
            mp[make]++;
        }
        for(int i=0;i<s2.size();i++){
            string make="";
            int j=i;
            while(s2[j]!=' ' && j<s2.size()){
                make+=s2[j];
                j++;
            }
            i=j;
            mp[make]++;
        }
        vector<string>ans;
        for(auto &it:mp){
            if(it.second==1)ans.push_back(it.first);
        }
        return ans;
    }
};