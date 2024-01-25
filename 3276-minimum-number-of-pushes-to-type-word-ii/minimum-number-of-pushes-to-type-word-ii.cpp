class Solution {
public:
    int minimumPushes(string word) {
        vector<int>a(26,0);
        for(int i=0;i<word.length();i++){
            a[word[i]-'a']++;
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=25,cnt=1;i>=0&& cnt<=26;i--,cnt++){
            if(cnt<=8){
                ans+=a[i];
            }
            else if (cnt>8 && cnt<=16){
                int t = a[i]*2;
                ans+=t;
            }
            else if (cnt>16 && cnt<=24){
                int h = a[i]*3;
                ans+=h;
            }
            else if (cnt>24 && cnt<=26){
                int y = a[i]*4;
                ans+=y;
            }
        }
        return ans;
    }
};