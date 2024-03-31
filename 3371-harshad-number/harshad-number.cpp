class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string d=to_string(x);
        int sum=0;
        for(int i=0;i<d.size();i++){
            sum+=d[i]-'0';
        }
        cout<<sum;
        if(x%sum==0)return sum;
        return -1;
    }
};