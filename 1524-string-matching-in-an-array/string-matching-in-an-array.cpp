class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        for(int i=0;i<words.size();i++){
            int cnt=0;
            for(auto it:mp){
                string st=it.first;
             if(st.find(words[i])!=-1)cnt++;
            }
            if(cnt>=2)ans.push_back(words[i]);
        }
        return ans;
    }
};