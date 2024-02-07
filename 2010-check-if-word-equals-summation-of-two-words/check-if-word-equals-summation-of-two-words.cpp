class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string val="";
        for(int i=0;i<firstWord.length();i++){
         val+=to_string(firstWord[i]-'a');
        }
        string val2="";
        for(int i=0;i<secondWord.length();i++){
            val2+=to_string(secondWord[i]-'a');
        }
        int v1=stoi(val);
        int v2=stoi(val2);
        int ans = v1+v2;
        string tr="";
        for(int i=0;i<targetWord.length();i++){
         tr+=to_string(targetWord[i]-'a');
        }
        int f= stoi(tr);
        if(f==ans)return true;
        return false;
    }
};