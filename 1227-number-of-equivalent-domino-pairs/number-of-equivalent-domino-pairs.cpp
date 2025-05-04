class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<vector<int>,int>mp;
        for(int i=0;i<dominoes.size();i++){
            sort(dominoes[i].begin(),dominoes[i].end());

            mp[dominoes[i]]++;
        }
    
        int maxi=0;
        for(auto it:mp){
            int num=it.second;
            int calc=(num*(num-1))/2;
            if(calc>0)maxi+=calc;
         // maxi=max(maxi,(num*(num-1))/2);
        }
        return maxi;
    }
};