class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(int i=0;i<rolls.size();i++)sum+=rolls[i];
        int val=mean*(rolls.size()+n);
        val-=sum;
        //cout<<val<<endl;
        if(val<n || 6*n<val)return {};
        int defaultval=val/n;
        int extra=val%n;
        cout<<defaultval<<endl;
        vector<int>ans(n,defaultval);
        
        for(int i=0;i<extra;i++){
           ans[i]++;
        }
        return ans;
    }
};