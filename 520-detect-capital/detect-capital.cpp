class Solution {
public:
    bool detectCapitalUse(string word) {
       int capital=0,firstletter=0;
       for(int i=0;i<word.size();i++){
        if(i==0 && word[i]==toupper(word[i])){
            capital++;
            firstletter++;
        }
        else if(word[i]==toupper(word[i]))capital++;
       }
       if(capital==word.size())return true;
       if(capital==1 && firstletter==1)return true;
       if(capital==0)return true;
       return false; 
    }
};