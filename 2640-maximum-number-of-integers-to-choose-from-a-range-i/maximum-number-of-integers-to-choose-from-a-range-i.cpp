class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        //simply apply the for loop
        set<int>s;
        for(int i=0;i<banned.size();i++)s.insert(banned[i]);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(s.find(i)!=s.end())continue;
            
            if(maxSum-i<0)return cnt;
            maxSum-=i;
            cnt++;
        }
        return cnt;
    }
};