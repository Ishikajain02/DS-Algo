class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())return false;
        bool flag =false;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){

                flag=true;
                break;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<s.size();i++){
          if(s[i]!=goal[i])cnt++;
          if(cnt>2)return false;
        }
        sort(s.begin(),s.end());
        sort(goal.begin(),goal.end());
        if(s!=goal)return false;
        if(cnt==0 && flag == false)return false;
        return true;

        
    }
};