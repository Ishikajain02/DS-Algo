class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
       
        int mini=INT_MAX;
        for(int right=0;right<cards.size();right++){
           if(mp.count(cards[right])) mini=min((right-mp[cards[right]]+1),mini);
           mp[cards[right]]=right;
        }
        if(mini==INT_MAX)return -1;
        return mini;
    }
};