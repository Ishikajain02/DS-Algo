class FindSumPairs {
public:
  map<int,int>mp;
  vector<int>n1;
  vector<int>n2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
       n1=nums1;
       n2=nums2;
        for(int i=0;i<nums2.size();i++)mp[nums2[i]]++;
    }
    
    void add(int index, int val) {
        mp[n2[index]]--;
       n2[index]+=val;

        mp[n2[index]]++;
    }
    
    int count(int tot) {
        int ans=0;
        for(int i=0;i<n1.size();i++){
            int v=tot-n1[i];
            ans+=mp[v];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */