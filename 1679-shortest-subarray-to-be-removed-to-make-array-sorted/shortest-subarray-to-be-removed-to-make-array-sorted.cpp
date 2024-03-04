class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        int ans=0;
        while(r>0 && arr[r]>=arr[r-1]){
            r--;
            //ans++;
        }
        //r=arr.size()-1;
        while(l<arr.size()-1&& arr[l]<=arr[l+1]){
            l++;
            
        }
          int n=arr.size();
        if(l==arr.size()-1)return 0;
        int result = min(n-l-1,r);
       // l=0;
       int i=0;
     
        while(i<=l && r<n){
      if(arr[i]<=arr[r])i++;
      else r++;
      result=min(result,r-i);
        }
        return result;
        
    }
};