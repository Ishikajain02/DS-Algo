class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>po;
        vector<int>ne;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
              po.push_back(nums[i]);
            }
            else ne.push_back(nums[i]);
        }
      //  cout<<po.size()<<endl;
     // cout<<po[0]<<endl;
        vector<int>ans;
      for (int i = 0; i < po.size(); i++) {
    ans.push_back(po[i]);
    ans.push_back(ne[i]);
 }
        return ans;
    }
};