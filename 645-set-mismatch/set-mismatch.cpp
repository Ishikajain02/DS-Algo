class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>t;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]))t.push_back(nums[i]);
            else s.insert(nums[i]);
         //   ans+=nums[i];
            
        }
        for(int i=1;i<=nums.size();i++){
            if(s.count(i))continue;
            else t.push_back(i);
        }
         
    return t;
    }
};