class Solution {
public:
int sum=0;
int maxi=0;
int fn(int capacity,vector<int>&weights){
   int days=1;
   int load=0;
   for(int i=0;i<weights.size();i++){
    if(load+weights[i]>capacity){
        load=0;
        days++;
    }
    load+=weights[i];

   }
   return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
       
       
        int start=maxi,high=sum;

        int n=weights.size();
       
        while(start<=high){
            int mid=(start+high)/2;
            int nodays=fn(mid,weights);
            if(nodays<=days){
                high=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};