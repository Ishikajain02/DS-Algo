class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        map<string,int>mp;
        vector<string>vc=words;
        vector<string>ans;
        vector<string>fin;
        sort(vc[0].begin(),vc[0].end());
        ans.push_back(vc[0]);
        fin.push_back(words[0]);
        for(int i=1;i<words.size();i++){
          sort(vc[i].begin(),vc[i].end());
          
          if(vc[i]!=ans.back()){
            ans.push_back(vc[i]);
            fin.push_back(words[i]);
          }
          
          
        }
        
        return fin;
    }
};