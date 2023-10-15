class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>mp;
        vector<int>v;
        for(int i=0;i<A.size();i++){
            mp.insert(A[i]);
            int cnt =0;
            for(int j=0;j<=i;j++){
                if(mp.find(B[j])!= mp.end())cnt++;
            }
            v.push_back(cnt);
        }
        return v;
    }
};