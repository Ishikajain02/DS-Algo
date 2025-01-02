class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        //for each 
        vector<int>prefixsum(words.size(),0);
        int prev=0;
        for(int i=0;i<words.size();i++){
           int j=0,h=words[i].size()-1;
           if((words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u') && ( words[i][h]=='a' ||  words[i][h]=='o' ||  words[i][h]=='e' ||  words[i][h]=='i' ||  words[i][h]=='u')){
            prefixsum[i]+=(prev+1);
           
           }
           else prefixsum[i]=prev;
            prev=prefixsum[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
         if(queries[i][0]>0){
            ans.push_back(prefixsum[queries[i][1]]-prefixsum[queries[i][0]-1]);
         }
         else ans.push_back(prefixsum[queries[i][1]]);
        }
        for(int i=0;i<prefixsum.size();i++)cout<<prefixsum[i]<<" ";
        return ans;
    }
};