class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>vc(26,-1);
        vector<int>vc2(26,-1);
        for(int i=word.size()-1;i>=0;i--){
            if(isupper(word[i])){
                vc[word[i]-'A']=i;
            }
          
        }
        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                vc2[word[i]-'a']=i;
            }
        }
      //  for(int i=0;i<3;i++)cout<<vc2[i]<<endl;
        int cnt=0;
        for(int i=0;i<26;i++){
            if(vc2[i]!=-1 && vc[i]!=-1){
                if(vc2[i]<vc[i])cnt++;
            }
        }
        return cnt;
    }
};