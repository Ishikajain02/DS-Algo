class Solution {
public:
    int maxSum(vector<int>& nums) {
        //unique and maximum //simply do nt take repeated ones and negative ones
        map<int,int>mp;
       // if(nums.size()==1)
        int ans=0;
        vector<int>vc;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(mp.count(nums[i])==0){
                    ans+=nums[i];
                    mp[nums[i]]++;
                }
            }
            else{
              vc.push_back(nums[i]);
            }
        }
        sort(vc.rbegin(),vc.rend());
        if(ans==0){
          ans=vc[0];
        }

        return ans;
    }
};