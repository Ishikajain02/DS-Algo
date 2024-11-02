class Solution {
public:
    bool isCircularSentence(string sentence) {
       char last=sentence[sentence.size()-1];
       for(int i=0;i<sentence.size();i++){
        if(i==0){
            if(sentence[i]!=last)return false;

        }
        else if(sentence[i]==' '){
           if(sentence[i-1]!=sentence[i+1]){
           // cout<<"coming"<<" "<<i-1<<" "<<i+1;
            return false;
           }
        }
       } 
       return true;
    }
};