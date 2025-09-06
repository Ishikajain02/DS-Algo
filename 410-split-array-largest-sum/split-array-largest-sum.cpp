class Solution {
public:
int sum=0,maxi=0;
    int fn(vector<int>nums,int k,int mid){
        int ans=1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>mid){
                ans++;
                sum=0;
            }
            sum+=nums[i];
        }
        return ans;
    }
    int splitArray(vector<int>& nums, int k) {
        //two 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        int start=maxi,end=sum;
        while(start<=end){
            int mid=(start+end)/2;
            int ans=fn(nums,k,mid);
            if(ans<=k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
};