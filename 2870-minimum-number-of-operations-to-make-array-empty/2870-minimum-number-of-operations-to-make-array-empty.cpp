class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int total =0;
        for(auto &it:mp){
            if(it.second%3==0)total= total+ it.second/3;
            if(it.second==1)return -1;
            else{
              //  total = total + it.second/3 ;
                if(it.second%3 ==2){
                    total = total + it.second/3;
                    total++;
                }
                if(it.second%3==1){
                total =  total +it.second/3-1;
                total+=2;
                }

            }
        }
        return total;
    }
};