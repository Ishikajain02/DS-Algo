class Solution {
public:
 int MOD = 1e9 + 7;
long long factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: (n * factorial(n - 1)) %MOD; 
}
    int countPermutations(vector<int>& complexity) {
        int mini=complexity[0];
       
        int cnt=0;
        for(int i=1;i<complexity.size();i++){
            if(complexity[i]==mini)cnt++;
            if(complexity[i]<mini)return 0;
        }
        if(cnt>0)return 0;
        else return factorial(complexity.size()-1);
    }
};