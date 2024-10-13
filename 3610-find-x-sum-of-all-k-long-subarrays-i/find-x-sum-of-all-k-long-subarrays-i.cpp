class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        //vector of nums with n elements
        // k and x is given
        vector<int>ans;
        for(int i=0;i<=nums.size()-k;i++){
            priority_queue<pair<int,int>>pq;
            map<int,int>mp;

            for(int j=i;j<i+k;j++){
              mp[nums[j]]++;
                //pq.push({})
            }
            for(auto it:mp){
                pq.push({it.second,it.first});
            }
            int sum=0;
            int v=x;
            while(!pq.empty() && v--){
                sum+=(pq.top().second*pq.top().first);
                pq.pop();
            }
          ans.push_back(sum);
        }
        return ans;
    }
};