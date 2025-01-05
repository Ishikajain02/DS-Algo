class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long>prefix(shifts.size(),0);
        long prev=0;
        int j=shifts.size()-1;
        for(int i=0;i<shifts.size();i++){
prev+=shifts[j];
prefix[j]=prev;
prefix[j]=prefix[j]%26;
j--;
        }
     //   reverse(prefix.begin(),prefix.end());
        string ans="";
        for(int i=0;i<s.size();i++){
            int start=s[i]-'a';
            start+=prefix[i];
            start=start%26;
           ans+=(start+'a');
        }
        return ans;
    }
};