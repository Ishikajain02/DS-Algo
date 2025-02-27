class Solution {
public:
    bool halvesAreAlike(string s) {
        int consonant1=0,vowel1=0,consonant2=0,vowel2=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')vowel1++;
            else consonant1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
             if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')vowel2++;
            else consonant2++;
        }
        return (vowel1==vowel2 && consonant1==consonant2);
    }
};