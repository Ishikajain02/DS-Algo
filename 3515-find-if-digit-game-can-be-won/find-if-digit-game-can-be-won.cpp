class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        //alice and bob
        int allsum=0,single=0,doub=0;
        for(int i=0;i<nums.size();i++)allsum+=nums[i];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10)single+=nums[i];
        }
        doub=(allsum-single);
        if(single>doub || doub>single)return true;
        return false;
    }
};