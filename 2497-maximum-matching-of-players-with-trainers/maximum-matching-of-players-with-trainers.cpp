class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(),trainers.end());
        int left=0;
        sort(players.begin(),players.end());
        int right=0,ans=0;
        while(right<players.size() && left<trainers.size()){
         if(trainers[left]>=players[right]){
            ans++;
            left++;
            right++;
         }
         else left++;

        }
        return ans;
    }
};