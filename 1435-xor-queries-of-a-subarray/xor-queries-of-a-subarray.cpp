class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefixsum;
        int prev=0;
        for(int i=0;i<arr.size();i++){
          prev^=arr[i];
          prefixsum.push_back(prev);
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(left==0)ans.push_back(prefixsum[right]);
           else  ans.push_back(prefixsum[left-1]^prefixsum[right]);
        }
        return ans;
    }
};