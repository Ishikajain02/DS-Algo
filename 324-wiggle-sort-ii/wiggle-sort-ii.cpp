class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        //make a priority queue=
        sort(nums.rbegin(),nums.rend());
        vector<int>vc=nums;
        //int i=0;
        int j=0;
        for(int i=1;i<n;i+=2){
            nums[i]=vc[j];
            j++;
        }
        for(int i=0;i<n;i+=2){
            nums[i]=vc[j];
            j++;
        }
      //  return nums
    }
};