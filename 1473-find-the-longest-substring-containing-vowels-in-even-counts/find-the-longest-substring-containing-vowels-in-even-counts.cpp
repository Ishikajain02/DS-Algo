class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<string,int>mp;
        string currstring="00000";
        mp[currstring]=-1;
        int lon=0;
        vector<int>vc(5,0);
        for(int i=0;i<s.size();i++){
         if(s[i]=='a')vc[0]=(vc[0]+1)%2;
         if(s[i]=='e')vc[1]=(vc[1]+1)%2;
         if(s[i]=='i')vc[2]=(vc[2]+1)%2;
         if(s[i]=='o')vc[3]=(vc[3]+1)%2;
         if(s[i]=='u')vc[4]=(vc[4]+1)%2;
         currstring="";
         for(int i=0;i<5;i++)currstring+=to_string(vc[i]);
         if(mp.find(currstring)!=mp.end())lon=max(lon,i-mp[currstring]);
         else mp[currstring]=i;
        }
        return lon;
    }
};