class Solution {
public:
string binary(int num){
    string ans="";
    while(num!=0){
        char val=(num%2)+'0';
         ans=val+ans;
        num/=2;
       
    }
    return ans;

}
    string convertDateToBinary(string date) {
        string req=date.substr(0,4);
        string ans="";
        ans+=binary(stoi(req));
        ans+="-";
        string an=date.substr(5,2);
        ans+=binary(stoi(an));
        ans+="-";
        string gg=date.substr(8,2);
        ans+=binary((stoi(gg)));
        return ans;
    }
};