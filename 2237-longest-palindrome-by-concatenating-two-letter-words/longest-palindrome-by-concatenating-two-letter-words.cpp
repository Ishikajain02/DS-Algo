class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        //if contains 
        //only single one one pair 
        map<string,int>mp;
        int one=0;
        for(int i=0;i<words.size();i++){
          mp[words[i]]++;
          if(words[i][0]==words[i][1])one++;
        }
        int len=0;
       /* bool single=false;
        for(auto it:mp){
            string s=it.first;
            int num1=it.second;
            if(s[0]==s[1]){
                if(num1==1 && !single){
                    single =true;
                    len+=2;
                }
                len+=((num1/2)*2);
                continue;
            }
            string g="";
            g+=s[1];
            g+=s[0];
            int num2=mp[g];
            len+=(min(num1,num2)*2);
        }
       // if(one>0)len+=2;*/
             bool central = false;
        for (auto& [s, count] : mp) {
            string rev = string{s.rbegin(), s.rend()};
            if (s == rev) {
               
                len += (count / 2) * 4;
                if (count % 2 == 1) {
                    central = true;
                }
            } else if (s < rev && mp.count(rev)) {
                
                len += min(count, mp[rev]) * 4;
            }
        }

        if (central) len += 2;
        return len;
    }
};