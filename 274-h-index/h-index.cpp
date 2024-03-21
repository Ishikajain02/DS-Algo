class Solution {
public:
    int hIndex(vector<int>& citations) {
       // if(citations.size())
      // if(citations.size()==1 && citations[0]==0)return 0;
       sort(citations.begin(),citations.end());
       int n=citations.size();
       int j=0;
       for(int i=0;i<citations.size();i++){
        if(citations[i]>=(n-i))return n-i;
        
       } 
       return 0;
    }
};