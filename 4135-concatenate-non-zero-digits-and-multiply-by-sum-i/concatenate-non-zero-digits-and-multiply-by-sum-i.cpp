class Solution {
public:
    long long sumAndMultiply(int n) {
        string s="";
        long long sum=0;
        string dummy=to_string(n);
        for(int i=0;i<dummy.size();i++){
            if(dummy[i]=='0')continue;
            else {
                s+=dummy[i];
            sum+=(dummy[i]-'0');
            }
        }
        cout<<sum<<" "<<s<<endl;
           if (s.empty()) return 0; 
        long long ans=stoll(s);
        long long st=ans*sum;
        return st;
    }
};