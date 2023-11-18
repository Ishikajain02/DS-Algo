class Solution {
public:
  bool possible(int mid,vector<int>&nums,int k){
      long long sum=0;
   for(int i=0;i<mid;i++){
       sum += nums[i];
   }
   long long total = 1LL* nums[mid-1]*mid;
   if(total-sum<=k){
       return 1;
   }
   int j=0;
   for(int i=mid;i<nums.size();i++){
       total = 1LL*nums[i]*mid;
       sum-=nums[j];
       sum+=nums[i];
       if(total-sum<=k){
       return 1;
   }
   j++;
   }
   return 0;
  }
    int maxFrequency(vector<int>& nums, int k) {
        int l=1,r=nums.size();
        sort(nums.begin(),nums.end());
        int ans =0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(possible(mid,nums,k)){
                ans=mid;
                l= mid+1;
                
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    /*      bool possible(vector<int>& nums,int mid, int k)
    { 
        long long int windowsum=0,totalsum=0;
        for(int i=0;i<mid;++i)
            windowsum+=nums[i];
 
        totalsum=1LL*nums[mid-1]*mid;
 
        if(totalsum-windowsum<=k)
            return 1;
 
        int j=0;
        for(int i=mid;i<nums.size();++i)
        {
            windowsum-=nums[j];
            windowsum+=nums[i];
            totalsum=totalsum=1LL*nums[i]*mid;
 
            if(totalsum-windowsum<=k)
                return 1;
            j++;
        }
 
        return 0;
    }
 
    int maxFrequency(vector<int>& nums, int k) {
      int l=1,h=nums.size(),ans = 0;
      sort(nums.begin(),nums.end());
 
      while(l<=h)
      {
        int mid=l+(h-l)/2;
        if(possible(nums,mid,k))
        {
            ans=mid;
            l=mid+1;
        } 
 
        else 
          h=mid-1;
      }
 
      return ans;*/
    }
};