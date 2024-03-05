class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>ans;
        vector<int>ans2;
        vector<int>f;
        int sizes=s.size();
        int sizea=a.size();
        int sizeb=b.size();
        int i=0,j=0;
        if(sizes<sizea)return {};
        for(int i=0;i<=s.size()-sizea;){
            if(s.substr(i,sizea)==a){
                ans.push_back(i);
             //   i+=sizea;i++;
             i++;
            }
            else i++;
        }
        for(int j=0;j<=sizes-sizeb;){
            if(s.substr(j,sizeb)==b){
                ans2.push_back(j);
               // j+=sizeb;
               j++;
            }
            else j++;
        }
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
         for(int i=0;i<ans2.size();i++)cout<<ans2[i]<<endl;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans2.size();j++){
                if(abs(ans[i]-ans2[j])<=k){
                    f.push_back(ans[i]);
                    break;
                }
            }
        }
        return f;
    }
};