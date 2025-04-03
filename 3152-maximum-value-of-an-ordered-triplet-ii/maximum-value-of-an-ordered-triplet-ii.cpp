class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       //caluclating maximum diff and *nums[k]
       long long ans=0,diff=0,element=0;
       for(int i=0;i<nums.size();i++){
         ans=max(ans,diff*nums[i]);
          diff=max(diff,element-nums[i]);
        element=max(element,1LL*nums[i]);
       
       
       } 
       return ans;
    }
};