class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len=searchWord.size();
        map<string,int>mp;
        int word=1;
        string s="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                s="";
                word++;
            }
            else{
                if(s.size()<=len){
                s+=sentence[i];
                if(s.size()==len){
                    if(mp.find(s)!=mp.end())continue;
                    mp[s]=word;
                 //   word++;
                }
                }
            }
        }
        if(mp.find(searchWord)==mp.end())return -1;
        return mp[searchWord];
    }
};