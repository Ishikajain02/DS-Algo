class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        string ans="",carry="0";
        while(i>=0 && j>=0){
            if(a[i] =='1'&& b[j]=='1'){
            
                ans+=carry;
                carry="1";
            }
            else if (a[i]=='0' && b[j]=='0'){
                ans+=carry;
                carry="0";
            }
            else {
                if(carry=="1"){
                  ans+="0";

                }
                else{
                    ans+="1";
                }
            }
            i--;
            j--;
        }
        while(i>=0){
            if(a[i]=='0'){
                if(carry=="1"){
                    ans+='1';
                    carry="0";
                }
                else {
                    ans+=a[i];
                }
            }
            else{
                if (carry=="1"){
                    ans+="0";
                    carry="1";
                }
                else{
                    ans+=a[i];
                }
            }
            i--;
        }
        while(j>=0){
             if(b[j]=='0'){
                if(carry=="1"){
                    ans+='1';
                    carry="0";
                }
                else {
                    ans+=b[j];
                }
            }
            else{
                if (carry=="1"){
                    ans+="0";
                    carry="1";
                }
                else{
                    ans+=b[j];
                }
            }
            j--;
        }
        if(carry=="1")ans+="1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};