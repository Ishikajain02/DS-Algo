class Solution {
public:
 string binary(int num){
    string ans="";
    while(num!=0){
        char val=(num%2+'0');
        ans= val+ans;
        num/=2;
    }
    return ans;
 }
    int minBitFlips(int start, int goal) {
        //10 to 7
        string one=binary(start);
        string two=binary(goal);

        while(one.size()!=two.size()){
            if(one.size()>two.size()){
                two="0"+two;
            }
            else one="0"+one;

        }
        cout<<one<<endl;
        cout<<two<<endl;
        int op=0;
        for(int i=0;i<one.size();i++){
            if(one[i]!=two[i])op++;
        }
        return op;
    }
};