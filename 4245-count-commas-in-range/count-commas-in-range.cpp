class Solution {
public:
    int countCommas(int n) {
        if(to_string(n).size()<=2)return 0;
        if(to_string(n).size()==3 and n<1000)return 0;
        string size=to_string(n);
        int ans=size.size()/3;
        if(size.size()%3==0)ans--;
        int num=n-1000+1;
        return num*ans;
    }
};