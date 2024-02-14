class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int val= sum/3;
        int count=0;
        int curr=0;
      //  if(val==0 && arr.size()>=3){
        //    return true;
      //  }
      if(sum%3!=0)return false;
        for(int i=0;i<arr.size() && count!=3;i++){
          curr+=arr[i];  
            if(val==curr){
                count++;
                curr=0;
            }
          
        }
        if(count==3)return true;
        else return false;
    }
};