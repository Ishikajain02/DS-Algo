class Solution {
public:
    int maxFreqSum(string s) {
        map<int,int>vo,con;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')vo[s[i]]++;
            else{
                con[s[i]]++;
            }
        }
        int maxia=0,maxib=0;
        for(auto it:vo){
            maxia=max(maxia,it.second);
        }
        for(auto it:con){
            maxib=max(maxib,it.second);
        }
        return maxia+maxib;
    }
};