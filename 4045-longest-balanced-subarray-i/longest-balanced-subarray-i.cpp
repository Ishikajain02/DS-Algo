class Solution {
public:
    int longestBalanced(vector<int>& nums) {
       //number of distinct even number = nuber of odd intergares
       int odd=0,even=0;
       int ans2=0;

       set<int>o,e;
       int ans=0;
       for(int j=0;j<nums.size();j++){
         odd=0,even=0;
       o.clear();
       e.clear();
       for(int i=j;i<nums.size();i++){
        if(nums[i]%2==0){
            if(e.find(nums[i])==e.end()){
                even++;
                e.insert(nums[i]);
            }
            if(even==odd)ans=i+1-j;
        }
        else{
            if(o.find(nums[i])==o.end()){
                odd++;
                o.insert(nums[i]);
            }
            if(even==odd)ans=i+1-j; 
        }

       }
       ans2=max(ans,ans2);
       }
      
       return ans2;
    }
};