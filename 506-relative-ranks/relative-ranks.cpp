class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>demo;
      for(int i=0;i<score.size();i++){
       demo.push_back(score[i]);
      }
       vector<string>answer;
      sort(score.rbegin(),score.rend());
      unordered_map<int,string>mp;
    if(score.size()>0){

      mp[score[0]]="Gold Medal";
    if(score.size()>1)  mp[score[1]]="Silver Medal";
    if(score.size()>2)  mp[score[2]]="Bronze Medal";
       int j=4;
      for(int i=3;i<score.size();i++){
      mp[score[i]]=to_string(j);
      j++; 
      }
     
      for(int i=0;i<demo.size();i++){
        answer.push_back(mp[demo[i]]);
      }
    }
      return answer;
    }
};