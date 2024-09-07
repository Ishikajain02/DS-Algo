class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            if(nums[i]==0)zero++;
        }
        if(zero>0 && s.size()>1)return s.size()-1;
        if(zero>0 && s.size()==1)return 0;
        return s.size();
    }
};