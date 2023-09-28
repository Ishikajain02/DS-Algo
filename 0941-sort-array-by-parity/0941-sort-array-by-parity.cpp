class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int>t;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                t.push_front(nums[i]);
            }
            else{
                t.push_back(nums[i]);
            }
        }
        while(!t.empty()){
            ans.push_back(t.front());
            t.pop_front();
        }
        return ans;
    }
};