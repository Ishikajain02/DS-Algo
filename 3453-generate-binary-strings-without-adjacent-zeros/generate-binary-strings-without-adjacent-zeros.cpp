class Solution {
public:
    string fn(vector<string>&ans,string temp,int n,int cnt){
        if(temp.size()==n){
            ans.push_back(temp);
            return temp;
        }
        if(cnt==0){
            string t=fn(ans,temp+'0',n,cnt+1);//adding 0
            string g=fn(ans,t.substr(0,t.size()-1)+'1',n,0);
            
        }
        if(cnt==1){
            string result=fn(ans,temp+'1',n,0);
        }
        return temp;
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        string final="";
        string f=fn(ans,final,n,0);
        return ans;
    }
};