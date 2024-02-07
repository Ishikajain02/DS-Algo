class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        int s=INT_MAX;
        int d=INT_MAX;
        if(mp.count('b')>0 && mp.count('n')>0 && mp.count('a')>0 && mp['l']>1 && mp['o']>1){
         //  continue;
             for(auto it:mp){
            if(it.first=='b' || it.first=='a'|| it.first=='n'){
                s=min(s,it.second);
            }
            if(it.first=='l'||it.first=='o'){
                d=min(d,it.second);
            }
        }
        }
        else {
            return 0;
        }
    
        //if(mp.size()<8)return 0;
        if(s<INT_MAX && d<INT_MAX){
            d=d/2;
            ans= min(s,d);
            cout<<s<<" "<<d<<endl;
        }
        
      return ans;      
    }
};