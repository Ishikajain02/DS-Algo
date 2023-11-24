class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int count = piles.size()/3;
        int index = piles.size()-2;
        sort(piles.begin(),piles.end());
        int ans=0;
        while(count--){
            cout<<index;
            ans += piles[index];
            index-=2;
        }
        return ans;
    }
};