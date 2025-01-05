class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>vc(s.size(),0);
        //using same prefix sum approach
        for(int i=0;i<shifts.size();i++){
            int start=shifts[i][0];
            int end=shifts[i][1];
            int dir=shifts[i][2];
            if(dir==0){
                 vc[start]--;
                 if(end+1<s.size())vc[end+1]++;
            }
            else{
                vc[start]++;
                if(end+1<s.size())
                vc[end+1]--;
            }
        }
        string ans="";
        int prev=0;
        for(int i=0;i<vc.size();i++){
            
             vc[i]+=prev;
             prev=vc[i];
              vc[i]%=26;
            if(vc[i]<0){
               vc[i]+=26;
               // ans+=(26-s[i]);
            }
            ans+=(((s[i]-'a'+vc[i])%26)+'a');
           
        }
        return ans;
    }
};