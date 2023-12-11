class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       /* if(arr.size()==1)return arr[0];
        double x = (arr.size()*0.25);
        for(int i=0;i<arr.size()-1;i++){
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j])count++;
            }
            if(double(count)>x)return arr[i];
        }
        return -1;*/
        //using maps
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int num = arr.size()/4;
        for(auto &it:mp){
            if(it.second>num)return it.first;
        }
        return -1;
    }
};