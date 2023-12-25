class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        sort(hFences.begin(),hFences.end());
        sort(vFences.begin(),vFences.end());
        int ans =-1;
        unordered_map<int,int>mp;
        for(int i=0;i<hFences.size();i++){
            for(int j=i+1;j<hFences.size();j++){
              mp[hFences[j]-hFences[i]]=1;
            }
        }
        for(int i=0;i<vFences.size();i++){
            for(int j=i+1;j<vFences.size();j++){
                if(mp.count(vFences[j]-vFences[i]))ans=max(ans,vFences[j]-vFences[i]);
            }
        }
        if (ans==-1)return -1;
       const int mod = 1e9 + 7;
       //long long l=(long long)ans *ans;
       ans =(1LL *ans*ans)%mod;
        return ans;
    }
};