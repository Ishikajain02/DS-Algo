class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        //find common prefix;
       vector<string>word1;
       vector<string>word2;
       string word="";
       for(int i=0;i<sentence1.size();i++){
        if(sentence1[i]==' '){
            word1.push_back(word);
            word="";
        }
        else word+=sentence1[i];
       }
       word1.push_back(word);
      // if()
       word="";
        for(int i=0;i<sentence2.size();i++){
        if(sentence2[i]==' '){
            word2.push_back(word);
            word="";
        }
        else word+=sentence2[i];
       }
       word2.push_back(word);
       int commonlength= min(word2.size(),word1.size());
       int ans=0;
       int start1=0;
       int start2=0;
       while(start1<word1.size()&& start2<word2.size()){
        if(word1[start1]==word2[start2])ans++;
        else break;
        start1++;
        start2++;
       }
       int ans2=0;
       int last1=word1.size()-1;
       int last2=word2.size()-1;
     while(last1>=0 && last2>=0){
        if(word1[last1]==word2[last2])ans2++;
        else break;
        last1--;
        last2--;
     }
       if(ans2==commonlength || ans==commonlength || ans+ans2==commonlength || ans+ans2>commonlength)return true;
       return false;
    }
};