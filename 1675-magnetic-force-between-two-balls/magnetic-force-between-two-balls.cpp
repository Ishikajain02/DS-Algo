class Solution {
public:
   int possible(int dis,vector<int>&position,int m){
    int cnt=1,prev=0;
    for(int i=1;i<position.size();i++){
        if(position[i]-position[prev]>=dis){
            cnt++;
            prev=i;
        }
    }
    return cnt;
   }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=1,end=position[position.size()-1];
        int ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(possible(mid,position,m)>=m){
                ans=mid;
                start=mid+1;
            }
            else end=mid-1;
        }
  return ans;
    }
};