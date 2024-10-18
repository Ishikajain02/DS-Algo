class Solution {
public:
    int minimumOperations(string num) {
        int mini=num.size();
        int n=num.size();
        if(n==2){
            int cnt=0;
            for(int i=0;i<2;i++){
                if(num[i]=='0')cnt++;
            }
               int val=((((num[0]-'0')*10)+(num[1]-'0')));
               cout<<val<<endl;
           
           
             if(val%25==0 && val/25!=0 )return 0;

            else  if(cnt==1)return 1;
            else return 2;
        }
        int cntzero=0;
        for(int i=0;i<num.size();i++){
            if(num[i]=='0')cntzero++;
            for(int j=i+1;j<num.size();j++){
                if(num[i]=='0' && num[j]=='0'){
                    mini=min(mini,n-i-2);
                }
                else if(num[i]=='5' && num[j]=='0'){
                    mini=min(mini,n-i-2);
                }
                else if(num[i]=='7' && num[j]=='5'){
                    mini=min(mini,n-i-2);
                }
                else if(num[i]=='2' && num[j]=='5'){
                    mini=min(mini,n-i-2);
                }
            }
        }
        return min(mini,n-cntzero);
    }
};