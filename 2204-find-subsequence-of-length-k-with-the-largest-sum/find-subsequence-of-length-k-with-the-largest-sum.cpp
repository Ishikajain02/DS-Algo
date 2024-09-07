class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
     vector<pair<int,int>>vc;
     for(int i=0;i<nums.size();i++){
        vc.push_back({nums[i],i});
     }
     sort(vc.rbegin(),vc.rend());
     vector<pair<int,int>>arr;
     for(int i=0;i<k;i++){
       arr.push_back({vc[i].second,vc[i].first});
     }
     sort(arr.begin(),arr.end());
     vector<int>ans;
     for(int i=0;i<k;i++)ans.push_back(arr[i].second);
     return ans;
    }
};