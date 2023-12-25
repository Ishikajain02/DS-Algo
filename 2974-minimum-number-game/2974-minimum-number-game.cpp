class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int alice=INT_MIN;
        int bob=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            alice = nums[i];
            bob= nums[i+1];
            arr.push_back(bob);
            arr.push_back(alice);
        }
        return arr;
    }
};