class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            int v=k;
            string f="";
            while(v-- && i<s.size()){
                f+=s[i];
                i++;
            }
              if(f.size()!=k && i==s.size()){
                int curr=f.size();
                cout<<curr<<endl;
                while(curr!=k){
                    f+=fill;
                    curr++;
                }
            }
            if(i!=s.size())i--;
            if(f.size()!=k){
                while(f.size()!=k)f+=fill;
            }
            ans.push_back(f);
        }
        return ans;
    }
};