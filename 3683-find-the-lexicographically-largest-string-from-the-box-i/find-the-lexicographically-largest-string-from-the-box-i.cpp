class Solution {
public:
    string answerString(string word, int numFriends) {
        //largest substring of size n-numfriends+1
        int n=word.size();
        int size=n-numFriends+1;
        string ans="";
        if(numFriends==1)return word;
        for(int i=0;i<word.size();i++){
            string sub=word.substr(i,size);
            ans=max(ans,sub);
        }
        return ans;
    }
};