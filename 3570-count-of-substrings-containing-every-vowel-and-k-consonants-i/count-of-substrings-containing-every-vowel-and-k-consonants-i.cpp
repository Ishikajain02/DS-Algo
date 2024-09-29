class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int ans=0;
        for(int i=0;i<=word.size()-5;i++){
         map<char,int>mp;
         int con=k;
         int varr=0;
         for(int j=i;j<word.size();j++ ){
          
           if(word[j]=='a') mp[word[j]]++;
            else if(word[j]=='e')  mp[word[j]]++;
            else if(word[j]=='i')  mp[word[j]]++;
            else if(word[j]=='o')  mp[word[j]]++;
            else if(word[j]=='u')  mp[word[j]]++;
            else varr++;
             if(mp.size()==5 && varr==k)ans++;
         }
        }
        return ans;
    }
};