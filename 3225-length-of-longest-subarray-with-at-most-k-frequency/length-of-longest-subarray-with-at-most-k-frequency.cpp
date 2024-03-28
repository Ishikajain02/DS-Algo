class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int sub=INT_MIN;
        int start=-1;
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
          //  unordered_map<int,int>mp;
         mp[nums[i]]++;
         while(mp[nums[i]]>k){
             start++;
            mp[nums[start]]--;
           
           
         
         }
          sub=max(i-start,sub);
        }
        return sub;
    }
};