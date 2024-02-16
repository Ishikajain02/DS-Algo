class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>fr;
        for(auto it:mp){
            fr.push_back(it.second);
        }
        sort(fr.begin(),fr.end());
        int count=0;
        for(int i=0;i<fr.size();i++){
            if(fr[i]<=k){
                k=k-fr[i];
                fr[i]=0;
               // count++;
            }
            else{
                //fr[i]-=k;
                k=0;
                break;
            }
        }
        for(int i=0;i<fr.size();i++){
            if(fr[i]==0)count++;
        }
        return mp.size()-count;
       // return fr.size()-count;
    }
};