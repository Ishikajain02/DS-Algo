class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<int>ans;
        for(auto it:mp1){
            int g=0;
            if(mp2.find(it.first)!=mp2.end()){
            g=min(it.second,mp2[it.first]);
            }
            for(int j=0;j<g;j++)ans.push_back(it.first);
        }
        return ans;
    }
};