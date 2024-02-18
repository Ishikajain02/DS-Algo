class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        bool t1=false,t2=false;
      //  sort(words.begin(),words.end());
        int cnt=0;
        for(int i=0;i<words.size()-1;i++){
            int size=words[i].size();
            for(int j=i+1;j<words.size();j++){
                int sj=words[j].size();
              //  if(sj<size)break;
                if(words[j].substr(0,size)==words[i] && words[j].substr(sj-size,size)==words[i]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};