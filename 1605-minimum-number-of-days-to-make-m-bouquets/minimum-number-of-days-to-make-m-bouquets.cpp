class Solution {
public:
  int check(int mid,int ans,int k,vector<int>&bloomDay){
    int cnt=0,adj=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            adj++;
        }
        else{
            adj=0;
        }
        if(adj==k){
            cnt++;
            adj=0;
        }

    }
return cnt;
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=0;
        int end=0;
        for(int i=0;i<bloomDay.size();i++){
            end=max(end,bloomDay[i]);
        }
        long long mul=(long long)m*k;
        if(mul>bloomDay.size())return -1;
        int ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(check(mid,ans,k,bloomDay)>=m){
                //start=mid+1;
                end=mid-1;
                ans=mid;
            }
            else start=mid+1;
        }
        return ans;
    }
};