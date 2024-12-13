class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<bool>vis(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        long long score=0;
        while(!pq.empty()){
          pair<int,int>p=pq.top();
          pq.pop();
          int ind=p.second;
          int val=p.first;
          if(vis[ind]==false){
            score+=val;
          if(ind+1<nums.size())vis[ind+1]=true;
          if(ind-1>=0)vis[ind-1]=true;
          }
        }
        return score;
    }
};