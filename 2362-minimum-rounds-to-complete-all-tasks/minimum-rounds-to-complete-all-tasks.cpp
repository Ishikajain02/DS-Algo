class Solution {
public:
//int fn(vector<int>&tasks){

//}
    int minimumRounds(vector<int>& tasks) {
        //in each round can complete 2 or 3 of same
        int mini=INT_MAX;
        map<int,int>mp;
        for(int i=0;i<tasks.size();i++)mp[tasks[i]]++;
        int ans=0;
        for(auto it:mp){
            if(it.second==1)return -1;
            if(it.second%3==0)ans+=(it.second/3);
            else ans+=(it.second/3+1);
        }
        return ans;
    }
};