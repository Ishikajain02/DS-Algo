class Solution {
public:
   
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long curr1=0,curr=0;
        for(int i=0;i<nums1.size();i++)curr1+=nums1[i];
        for(int i=0;i<nums2.size();i++)curr+=nums2[i];
       
        long long zero=0,zero2=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==0){
                zero++;
                curr1++;
            }
        }
         for(int i=0;i<nums2.size();i++){
            if(nums2[i]==0){
                zero2++;
                curr++;
            }

        }
          if(!zero  && curr>curr1 || !zero2 && curr1>curr)return -1;
        return max(curr,curr1);
    }
};