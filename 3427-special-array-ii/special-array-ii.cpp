class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>pre(nums.size());
        vector<bool>ans;
        pre[0]=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i-1]%2==0)pre[i]=1+pre[i-1];
            else if(nums[i]%2!=0 && nums[i-1]%2!=0)pre[i]=1+pre[i-1];
            else{
                pre[i]=pre[i-1];
            }
        }
        for(int i=0;i<queries.size();i++){
            if(pre[queries[i][1]]-pre[queries[i][0]]>=1)ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};