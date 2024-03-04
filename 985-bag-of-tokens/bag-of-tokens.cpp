class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                i++;
                score++;
            }
            else{
                if(score>=1 && i!=j){
                    power+=tokens[j];
                    j--;
                    score--;

                }
                else{
                    return score;
            }
            }
        }
        return score;
    }
};