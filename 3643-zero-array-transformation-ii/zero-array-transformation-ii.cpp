class Solution {
public:
bool fn(vector<int>& nums, vector<vector<int>>& queries,int mid){
     vector<int> diff(nums.size(), 0);

        //O(Q)
        for(int i = 0; i <= mid; i++) {
            int l = queries[i][0];
            int r   = queries[i][1];
            int x     = queries[i][2];

            diff[l] += x;
            if(r+1 < nums.size())
                diff[r+1] -= x;
        }

        int cumSum = 0;
        //O(n)
        for(int i = 0; i < nums.size(); i++) {
            cumSum += diff[i];

            diff[i] = cumSum;

            if(nums[i] - diff[i] > 0) { //nums[i] 0 nahi ban paya
                return false;
            }
        }

        return true;

}
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int q=queries.size();
        if(fn(nums,queries,-1))return 0;
       int ans=-1;
       int l=0,r=q-1;
       while(l<=r){
        int mid = l + (r - l) / 2;

        if(fn(nums,queries,mid)==true){
            ans=mid+1;
            r=mid-1;
        }
        else l=mid+1;
       }
       return ans;
    }
};