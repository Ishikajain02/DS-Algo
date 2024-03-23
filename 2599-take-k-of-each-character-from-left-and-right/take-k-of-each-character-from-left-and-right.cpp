class Solution {
public:
    int takeCharacters(string s, int k) {
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a')a++;
            else if(s[i]=='b')b++;
            else c++;
        }
        a=a-k;
        b=b-k;
        c=c-k;
        if(a<0 || b<0 || c<0)return -1;
        int pa=0,pb=0,pc=0;
        int i=0,j=0;
        int maxl=0;
        while(j<s.size()){
            if(s[j]=='a')pa++;
           else if(s[j]=='b')pb++;
           else if(s[j]=='c')pc++;
            while(pa>a || pb>b || pc>c){
                if(s[i]=='a')pa--;
              else  if(s[i]=='b')pb--;
                else pc--;
                i++;
            }
            maxl=max(maxl,j-i+1);
            j++;
        }
        return s.size()-maxl;
    }
};