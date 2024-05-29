class Solution {
public:
    int numSteps(string s) {
        int steps=0;
        int carry=0;
        for(int i=s.length()-1;i>0;i--){
            if((s[i]-'0'+carry)%2==0){
               steps++;
             //  carry=0;
            }
            else{
                carry=1;
                steps+=2;
            }
        }
        return steps+carry;
    }
};