class Solution {
public:
    vector<int> diStringMatch(string s) {
        int high=s.size();
        int low=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
          
            if(s[i]=='I'){
                ans.push_back(low);
                low++;
            }
            else if(s[i]=='D'){
                ans.push_back(high);
                high--;
            }
        }
         
          ans.push_back(low);
         
        return ans;
    }
};