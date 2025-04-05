class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        //element *2 
        //and make the pairs of size/2
        map<int,int>mp;

        for(int i=0;i<arr.size();i++){
         //   if(arr[2*i+1]!=arr[2*i])return false;
         mp[arr[i]]++;
        }
        //sort(arr.begin(),arr.end());[-4,-2,2,4]
         sort(arr.begin(), arr.end(), [](int a, int b) {
            return abs(a) < abs(b);//[-2,2,-4,4]
        });

         for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>0 && mp[2*arr[i]]>0){
                mp[arr[i]]--;
                mp[2*arr[i]]--;
            }
            else if(mp[arr[i]]>0 && mp[2*arr[i]]<=0)return false;
         }
        return true;
    }
};