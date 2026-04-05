class Solution {
public:
    bool judgeCircle(string moves) {
       map<char,int>mp;
       int r=0,l=0,u=0,d=0;
      
       for(int i=0;i<moves.size();i++){
        mp[moves[i]]++;
       } 
      
       for(auto it:mp){
         if(it.first=='U')u=it.second;
         if(it.first=='L')l=it.second;
         if(it.first=='R')r=it.second;
         if(it.first=='D')d=it.second;
       }
       if(u!=d)return false;
       if(r!=l)return false;
       return true;
    }
};