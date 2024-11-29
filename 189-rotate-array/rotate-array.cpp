class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        if(nums.size()==1 || k==nums.size())return;
        k=k%nums.size();
        int n=nums.size()-k;
        for(int i=n;i<nums.size();i++)ans.push_back(nums[i]);
        for(int i=0;i<n;i++)ans.push_back(nums[i]);
        nums=ans;
    
    }
};