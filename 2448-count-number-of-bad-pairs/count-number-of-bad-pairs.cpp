class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //first implementing brute force
      /*  long long ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(j-i!=nums[j]-nums[i])ans++;
            }
        }
        return ans;*/
        //using maps to ount the number of pairs
        map<int,int>mp;
        //long long ans=0;
        long long ans=(nums.size()*(nums.size()-1))/2;
        for(int i=0;i<nums.size();i++){
            if(mp[i-nums[i]]){
                ans-=mp[i-nums[i]];
            }
            mp[i-nums[i]]++;
            
          //  if(mp.find(nums[i]-i))
        }
        
       
        return ans;
    }
};