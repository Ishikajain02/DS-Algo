class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0,f=0;
        int left=0,len=0,maxf=0;
        for(int right=0;right<answerKey.size();right++){
            if(answerKey[right]=='T')t++;
            else f++;
            maxf=max(maxf,max(t,f));
            while(right-left+1-maxf>k){
                if(answerKey[left]=='T'){
                    t--;
                    if(t<0)t=0;
                }
                else {
                    f--;
                    if(f<0)f=0;
                }
                left++;
                
            }
            len=max(len,right-left+1);
        }
        return len;
    }
};