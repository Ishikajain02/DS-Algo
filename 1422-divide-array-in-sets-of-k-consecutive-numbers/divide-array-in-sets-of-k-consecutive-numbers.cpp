class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        sort(nums.begin(),nums.end());
        //set<int>s;
        for(int i=0;i<nums.size();i++){
           // s.insert(nums[i]);
            mp[nums[i]]++;
        }
    for(auto it=mp.begin();it!=mp.end();){
 
       if(it->second>0){
        for(int i=0;i<k;i++){
            if(mp[it->first+i]>0){
                mp[it->first+i]--;
            }
            else return false;
        }
      }
      else it++;
      
     }
     return true;
    }
};