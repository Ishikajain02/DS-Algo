class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
     /*  set<int>s;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
     
         for(int j=-k;j<=k;j++){
            if(s.find(nums[i]+j)==s.end()){
                s.insert(nums[i]+j);
                cout<<nums[i]+j;
                break;
            }
        
      }
       }
       return s.size();*/
       //optimizing it further
       int prev=INT_MIN;
       int ans=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        int mx=nums[i]+k;
        int mn=nums[i]-k;
        if(prev<mn){
            prev=mn;
            ans++;
        }
        else if(prev<mx){
            prev=prev+1;
            ans++;
        }
       }
       return ans;
    }
};