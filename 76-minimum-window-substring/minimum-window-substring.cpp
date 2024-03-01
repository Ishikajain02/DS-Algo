class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>needfrequency(128,0);
        vector<int>currfrequency(128,0);
        int m= s.size();
        int n=t.size();
        for(auto ch:t){
            needfrequency[ch]++;
        }
        int countsatisfy=0;
        for(int i=0;i<128;i++){
            if(needfrequency[i]==0)countsatisfy++;
        }
        int l=0,r=-1;
        int ans=m+1;
        int li=-1,ri=-1;
        while(l<m){
            if(countsatisfy<128){
                r++;
                if(r==m)break;
                currfrequency[s[r]]++;
                if(currfrequency[s[r]]==needfrequency[s[r]])countsatisfy++;
            }
            else{
            // ans=min(ans,r-l+1);
            if(ans>(r-l+1)){
                ans=r-l+1;
                li=l;
                ri=r;
            }
             currfrequency[s[l]]--;
             if(currfrequency[s[l]]==needfrequency[s[l]]-1)countsatisfy--;
             l++;
            }
        }
        if(ans==m+1)return "";
        string num="";
        for(int i=li;i<=ri;i++){
            num+=s[i];
        }
        return num;
    }
};