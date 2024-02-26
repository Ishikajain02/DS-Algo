class Solution {
public:
bool check(vector<int>&v1,vector<int>&v2){
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<26;i++){
        if(v1[i]>0)cnt1++;
        if(v2[i]>0)cnt2++;
    }
    if(cnt1==cnt2)return true;
    return false;
}
    bool isItPossible(string word1, string word2) {
        vector<int>vc1(26,0);
        vector<int>vc2(26,0);
        for(int i=0;i<word1.size();i++){
            vc1[word1[i]-'a']++;
        }
        for(int j=0;j<word2.size();j++){
            vc2[word2[j]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(vc1[i] &&vc2[j]){
                    vc1[i]--;
                    vc2[j]--;
                    vc1[j]++;
                    vc2[i]++;
                    if(check(vc1,vc2))return true;
                    vc1[i]++;
                    vc2[j]++;
                    vc1[j]--;
                    vc2[i]--;
                }
            }
           
        }
         return false;
    }
};