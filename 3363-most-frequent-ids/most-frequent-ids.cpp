class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        unordered_map<long long,long long>mp;
       // int cnt=0;
       priority_queue<pair<long , long>> pq;
        vector<long long>ans;
           for(int i=0;i<nums.size();i++){
           mp[nums[i]]+=freq[i];
            //long long cnt=0;
        
         while (!pq.empty() && mp[pq.top().second] != pq.top().first) {
        pq.pop();
            }
           pq.push({mp[nums[i]],nums[i]});
              if(!pq.empty())  // Check if pq is not empty before accessing its top
                ans.push_back(pq.top().first);
            else
                ans.push_back(0);
          
        }
    return ans;
 
 
    }
};