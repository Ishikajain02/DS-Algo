class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        int mini=INT_MAX;
        int op1=0,op2=0;
        vector<int>vc=nums;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==1){
                nums[i]=-1;
                if(nums[i+1]>0)nums[i+1]=-1;
                else nums[i+1]=1;
                op1++;
            }
           
        }
        if(nums[nums.size()-1]==1)op1=INT_MAX;
        nums=vc;
          for(int i=0;i<n-1;i++){
            if(nums[i]==-1){
                nums[i]=1;
                if(nums[i+1]<0)nums[i+1]=1;
                else nums[i+1]=-1;
                op2++;
            }
           
        }
        if(nums[nums.size()-1]==-1)op2=INT_MAX;
        mini=min(op1,op2);
        cout<<op1<<" "<<op2<<endl;
        if(mini<=k)return true;
        return false;
    }
};