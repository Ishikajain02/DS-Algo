class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>prefix(arr.size(),0);
        prefix[arr.size()-1]=-1;
        int maxi=-1;
        if(arr.size()==1)return {-1};
        int j=arr.size()-2;
        for(int i=arr.size()-1;i>0;i--){
            maxi=max(arr[i],maxi);
            prefix[j]=maxi;
            j--;
        }
       // prefix[0]=maxi;
        return prefix;

    }
};