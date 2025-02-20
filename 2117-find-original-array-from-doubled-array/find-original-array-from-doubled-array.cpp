class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()==1)return {};
        map<int,int>mp;
        for(int i=0;i<changed.size();i++)mp[changed[i]]++;
        sort(changed.begin(),changed.end());
      //  vector<bool>used(changed.size(),false);
        vector<int>ans;
        for(int i=0;i<changed.size();i++){
            if(mp[changed[i]]==0)continue;
              mp[changed[i]]--;
            if(mp[changed[i]*2]==0)return {};
            
                ans.push_back(changed[i]);
                mp[changed[i]*2]--;
              
             //   if( mp[changed[i]*2]==0)mp.erase(changed[i]*2);
               // if(mp[changed[i]]==0)mp.erase(changed[i]);
              //  i++;
            


        }
        return ans;
    }
};