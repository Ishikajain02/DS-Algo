class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int size=s.size()/k;
       // k=size;
        map<string,int>mp;
        int i=0;
        while(i<s.size()){
            mp[s.substr(i,size)]++;
            i+=size;
        }
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(int i=0;i<t.size();){
            string f=t.substr(i,size);
            if(mp.find(f)==mp.end())return false;
            else{
                mp[f]--;
                if(mp[f]==0)mp.erase(f);
            }
            i+=size;
        }
        return true;
    }
};