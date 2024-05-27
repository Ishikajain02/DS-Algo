class Solution {
public:
/*    int specialArray(vector<int>& nums) {
        //BRUTE FORCE
        
        TC-O(N^2);
        SC-O(1);
        sort(nums.begin(),nums.end());
        for(int j=0;j<=nums[nums.size()-1];j++){
            int cnt=0;
           for(int i=0;i<nums.size();i++){
            if(nums[i]>=j)cnt++;
           }
           if(cnt==j){
            return j;
           }
        }
        return -1;
    }*/

    //BINARY SEARCH APPROACH
    //O(NLOGN);
    //S(C)-O(1)



/*    int search(vector<int>nums,int index){
        int start=0;
        int end=nums.size()-1;
        int val=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>=index){
                val=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return val;
    }
    int specialArray(vector<int>nums){
       sort(nums.begin(),nums.end());
       for(int i=1;i<=nums.size();i++){
        int val=search(nums,i);
        if(i==(nums.size()-val))return i;
       }
       return -1;
    }*/
    int specialArray(vector<int>nums){
        vector<int>freq(nums.size()+1);
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            freq[min(n,nums[i])]++;
        }
        int suffix=0;
        for(int i=n;i>=1;i--){
            suffix+=freq[i];
            if(suffix==i)return i;
        }
        return -1;
    }
};