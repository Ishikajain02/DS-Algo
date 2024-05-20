class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long>val;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            pq.push({nums[i],i});
        }
        
        for(int i=0;i<queries.size();i++){
            ans-= nums[queries[i][0]];
            nums[queries[i][0]]=0;
            int k=queries[i][1];
            while(k>0 && !pq.empty()){
            if(nums[pq.top().second]==0){
                pq.pop();
                continue;
            }
             ans-=nums[pq.top().second];
              nums[pq.top().second]=0;
              pq.pop();
              k--;
            }
            
           
            val.push_back(ans);
        }
        return val;
    }
};