class Solution {
public:
    int bitwiseComplement(int n) {
        string s;
         if(n==0)return 1;
        while(n>0){
            s+=(n%2)+'0';
            n/=2;
        }
       
        reverse(s.begin(),s.end());
        string comp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')comp+='0';
            else comp+='1';
        }
        cout<<s<<endl;
       int ans=0;
       reverse(comp.begin(),comp.end());
       for(int i=0;i<comp.size();i++){
        if(comp[i]=='1')ans+=pow(2,i);
       }
       cout<<comp<<endl;
       return ans;
    }
};