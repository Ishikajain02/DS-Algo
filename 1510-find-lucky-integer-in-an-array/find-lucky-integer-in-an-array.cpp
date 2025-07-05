class Solution {
public:
    int findLucky(vector<int>& arr) {
       map<int,int>mp;
       int num=-1;
       for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
       } 
       for(auto it:mp){
        if(it.second==it.first)num=it.first;
       }
       return num;
    }
};