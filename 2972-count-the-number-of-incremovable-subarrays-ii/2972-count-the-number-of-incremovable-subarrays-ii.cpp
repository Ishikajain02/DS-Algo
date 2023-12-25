class Solution {
public:
    long long incremovableSubarrayCount(vector<int>& nums) {
        vector<int>pre;
        vector<int>post;
        pre.push_back(nums[0]);
        post.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            if(pre.back()<nums[i])pre.push_back(nums[i]);
            else break;
        }
        for(int i=nums.size()-2;i>=0;i--){
            if(post.back()>nums[i])post.push_back(nums[i]);
            else break;
        }
        reverse(post.begin(),post.end());
        int n= nums.size();
        if(pre.size()+post.size()>n)return 1ll* n*(n+1)/2;
        int i=0,j=0;
        long long ans=pre.size()+post.size();
        while(i<pre.size() &&j<post.size()){
            if(pre[i]<post[j]){
              ans+= post.size()-j;
              i++;
            }
            else j++;
        }
        return ans+1;
    }
};