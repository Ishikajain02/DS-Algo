#include<algorithm>
class Solution {
public:
    long cal(vector<int>&nums,int i){
        long l=1,g=0;
        for(int j=0;j<i;j++){
            l=lcm(l,nums[j]);
            g=gcd(g,nums[j]);
        }
        for(int j=i+1;j<nums.size();j++){
              l=lcm(l,nums[j]);
            g=gcd(g,nums[j]);
        }
        return l*g;
    }
    long long maxScore(vector<int>& nums) {
        //atmost one element lcm*gcd
        long long ans=0;
        long li=1,gi=0;
        for(int i=0;i<nums.size();i++){
            li=lcm(li,nums[i]);
            gi=gcd(gi,nums[i]);
        }
        ans=li*gi;
        for(int i=0;i<nums.size();i++){
            ans=max<long long>(ans,cal(nums,i));
        }
        return ans;
    }
};