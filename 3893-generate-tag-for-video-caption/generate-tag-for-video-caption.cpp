class Solution {
public:
    string generateTag(string caption) {
        string ans="#";
        bool f=false;
        for(int i=0;i<caption.size();i++){

            if(!f && caption[i]!=' '){
                ans+=tolower(caption[i]);
                f=true;
            }
          
            else if(caption[i]==' ' && i+1<caption.size() && caption[i+1]!=' ' && f){
                caption[i+1]=toupper(caption[i+1]);
                ans+=caption[i+1];
                i++;
            }
            else if(caption[i]==' ')continue;
            else ans+=tolower(caption[i]);
        }
        if(ans.size()>100)return ans.substr(0,100);
        return ans;
    }
};