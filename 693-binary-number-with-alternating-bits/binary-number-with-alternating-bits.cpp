class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bin;
        while(n>0){
            bin+=(n%2);
            n/=2;
        }
        reverse(bin.begin(),bin.end());
        for(int i=0;i<bin.size()-1;i++){
            if(bin[i]==bin[i+1])return false;
        }
        return true;
    }
};