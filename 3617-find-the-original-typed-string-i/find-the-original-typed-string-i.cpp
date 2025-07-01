class Solution {
public:
    int possibleStringCount(string word) {
        //atmost once
        int repeat=0;
        map<char,int>mp;
        char prev=word[0];
        for(int i=1;i<word.size();i++){
            if(word[i]==prev)repeat++;
            else prev=word[i];
        }
        return repeat+1;
    }
};