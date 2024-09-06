class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        //removing min and max element
        int maxindex=-1,minindex=-1;
        int valuemax=INT_MIN;
        int valuemin=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>valuemax){
                valuemax=nums[i];
                maxindex=i;
            }
            if(nums[i]<valuemin){
                valuemin=nums[i];
                minindex=i;
            }
        }
        cout<<valuemin<<" "<<valuemax<<endl;
        int right=max(minindex,maxindex);
        int left=min(minindex,maxindex);
        //add 1
        cout<<right<<" "<<left<<endl;
        int val1=left+(nums.size()-right)+1;
        int val2=right+1;
        int val3=nums.size()-left;
        cout<<val1<<" "<<val2;
        return min({val1,val2,val3});
    }
};