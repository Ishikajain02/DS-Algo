class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      //  sort(hand.begin(),hand.end());
        map<int,int>mp;
        for(int i=0;i<hand.size();i++)mp[hand[i]]++;
        for(auto it=mp.begin();it!=mp.end();){
            if(it->second>0){
                for(int j=0;j<groupSize;j++){
                    if(mp[it->first+j]>0){
                        mp[it->first+j]--;
                    }
                    else return false;
                }
            }
            else it++;
        }
        return true;
    }
};