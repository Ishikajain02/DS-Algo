class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int right=nums.size()-1,ans=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[right]){
                right--;
                ans++;
            }
            //else break;

        }
        return ans;

    }
};