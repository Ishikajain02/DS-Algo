class Solution {
public:
    int minimumPushes(string word) {
        vector<int>vc(26,0);
        for(int i=0;i<word.size();i++){
            vc[word[i]-'a']++;
        }
        sort(vc.rbegin(),vc.rend());
        int ans=0;
        int cnt=1;
        int val=0;
        for(int i=0;i<26;i++){
            if(vc[i]>0){
                val++;
                ans+=(vc[i]*cnt);
                if(val%8==0)cnt++;
            }
        }
        return ans;
    }
};