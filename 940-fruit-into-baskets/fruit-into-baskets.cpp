class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int maxf=INT_MIN;
        int i=0,j=0;
        int n=fruits.size();
        for(i=0;i<n;i++){
            if(mp.size()<2 ||mp.find(fruits[i])!=mp.end()){
                mp[fruits[i]]++;
            }
            else{
                while(mp.size()!=1){
                    mp[fruits[j]]--;
                    if(mp[fruits[j]]==0){
                        mp.erase(fruits[j]);
                    }
                    j++;
                }
                mp[fruits[i]]++;
            }
            maxf=max(maxf,i-j+1);
        }
        return maxf;
    }
};