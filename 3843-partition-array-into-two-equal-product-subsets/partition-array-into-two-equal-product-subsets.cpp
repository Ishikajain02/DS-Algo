class Solution {
public:
 typedef __int128 ll;
 //long long is giving runtime errors
    bool fn(ll sum1,ll sum2,vector<int>&nums,ll target,int i){
        if(i>=nums.size()){
            if(sum1==target && sum2==target)return true;
            return false;
        }
        return fn((ll)sum1*nums[i],sum2,nums,target,i+1)|| fn(sum1,(ll)sum2*nums[i],nums,target,i+1);
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        //any subset having product equal to target
     // since constraints are small brute force also works
     ll total=1;
     for(int i=0;i<nums.size();i++){
        total*=(ll)nums[i];
     }
     if(total!=(ll)target*target)return false;
     return fn(1,1,nums,target,0);

    }
    
};