class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=1;i<26;i++){
            if(find(letters.begin(), letters.end(), target+i)!=letters.end())return target+i;
        }
        return letters[0];
    }
};