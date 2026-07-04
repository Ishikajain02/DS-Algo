class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int ind=5;
        int first=0;
        int second=0;
        string active="first";
        for(int i=0;i<nums.size();i++){
             cout<<first<<" "<<second<<endl;
            if(nums[i]%2!=0 && i==ind){
                if(active=="first")first+=nums[i];
                else second+=nums[i];
                  if(i==ind)ind+=6;
                //active++;
            }
            else if(nums[i]%2!=0 || i==ind){
                if(active=="first"){
                    active="second";
                    second+=nums[i];
                    if(i==ind)ind+=6;
                }
                else{
                   active="first";
                   first+=nums[i];
                   if(i==ind)ind+=6;
                } 
               
              
                
            }
            else{
              if(active=="first")first+=nums[i];
                else second+=nums[i];   
            }

        }
        cout<<first<<" "<<second;
        return first-second;
    }
};