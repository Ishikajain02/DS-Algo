class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>vc(3,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                vc[1]++;

            }
            else if(nums[i]==0){
                vc[0]++;
            }
            else vc[2]++;
        }
       int j=0;
       while(vc[0]>0){
        nums[j]=0;
        vc[0]--;
        j++;
       }
       while(vc[1]>0){
        nums[j]=1;
        j++;
        vc[1]--;
       }
       while(vc[2]>0){
        nums[j]=2;
        j++;
        vc[2]--;
       }
    }
};