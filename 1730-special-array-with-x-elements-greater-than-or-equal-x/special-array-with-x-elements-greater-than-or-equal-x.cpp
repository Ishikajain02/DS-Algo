class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int j=0;j<=nums[nums.size()-1];j++){
            int cnt=0;
           for(int i=0;i<nums.size();i++){
            if(nums[i]>=j)cnt++;
           }
           if(cnt==j){
            return j;
           }
        }
        return -1;
    }
};