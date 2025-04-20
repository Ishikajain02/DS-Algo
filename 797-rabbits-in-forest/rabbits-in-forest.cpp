class Solution {
public:
    int numRabbits(vector<int>& answers) {
        //the element itself +1
         map<int,int>mp;
         int ans=0;
         for(int i=0;i<answers.size();i++){
            if(mp[answers[i]]==0){
                ans+=(1+answers[i]);
                mp[answers[i]]=answers[i];
            }
            else mp[answers[i]]--;
         }
         return ans;
    }
};