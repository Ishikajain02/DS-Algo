class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        //int cnth=1,cntv=1 ;
        long long int maxc=0,maxv=0;
        for(int i=1;i<horizontalCuts.size();i++){
            if(maxc<horizontalCuts[i] - horizontalCuts[i-1])maxc=horizontalCuts[i] - horizontalCuts[i-1];
        }
        for(int i=1;i<verticalCuts.size();i++){
            if(maxv<verticalCuts[i]-verticalCuts[i-1])maxv=verticalCuts[i] - verticalCuts[i-1];
        }
        maxc = maxc%1000000007;
        maxv=maxv%1000000007;
        int ans = 1ll*maxc*maxv%1000000007;
        return ans;
    }
};