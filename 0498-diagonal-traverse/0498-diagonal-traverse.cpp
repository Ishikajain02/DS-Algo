class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
          vector<vector<int>>ans(100001);
        int size=0,maxsum=0,index=0,sum=0;
        for(int i=0;i<nums.size();i++){
            size+=nums[i].size();

            for(int j=0;j<nums[i].size();j++){
             sum = i+j;
             ans[sum].push_back(nums[i][j]);
             maxsum= max(maxsum,sum);
            }
        }
        vector<int>f;
        for(int i=0;i<=maxsum;i++){
            vector<int>t= ans[i];
            if(i%2==0) for(int j=t.size()-1;j>=0;j--){
                f.push_back(t[j]);
            }
            else for(int j=0;j<t.size();j++){
                f.push_back(t[j]);
            }
            
        }
        return f;
    }
};