class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,int>mp;
        for(auto&it:cpdomains){
            string n=" ";
           for(int i=0;it[i]!=' ';i++){
            n+=it[i];
           }
           int cmc=stoi(n);
          string str="";
           for(int i=it.size()-1;it[i]!=' ';i--){
               if(it[i]=='.')mp[str]+=cmc;
            str+=it[i];
           }
           mp[str]+=cmc;
          
        }
        vector<string>vc;
        for(auto &it:mp){
            string f= it.first;
            reverse(f.begin(),f.end());
            string r = to_string(it.second)+' '+f;
            vc.push_back(r);
        }
        return vc;
    }
};