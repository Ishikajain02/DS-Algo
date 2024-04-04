class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left=0,val=0;
        int cost=0;
        for(int right=0;right<s.size();right++){
         cost+=abs(s[right]-t[right]);
         while(cost>maxCost){
           cost-=abs(s[left]-t[left]);
           left++;
         }
         val=max(val,right-left+1);
        }
        return val;
    }
};