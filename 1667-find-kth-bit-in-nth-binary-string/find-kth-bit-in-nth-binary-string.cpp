class Solution {
public:
    string invert(string&ans){
        string fnew="";
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1'){
                fnew+='0';
            }
            else fnew+='1';
        }
        return fnew;
    }
    char findKthBit(int n, int k) {
        string ans="0";
        n--;
        // int val=0;
        while(n--){
           // char las=ans[val];
           // val++;
            string fnew="";
            
            fnew+='1';
            string nn=invert(ans);
            reverse(nn.begin(),nn.end());
         ans+=(fnew+nn);
        // cout<<ans<<endl;
        }
        return ans[k-1];
    }
};