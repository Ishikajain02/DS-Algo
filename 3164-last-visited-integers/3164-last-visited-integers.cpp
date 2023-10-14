class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>ans;
        vector<int>t;
        int k=0;
        for(int i=0;i<words.size();i++){
            if(words[i]=="prev"){
             k++;
             int s = t.size()-k;
             if(s>=0)ans.push_back(t[s]);
             else ans.push_back(-1);
            }
            else{
                k=0;
                t.push_back(stoi(words[i]));
            }
        }
return ans;
        
    }
};