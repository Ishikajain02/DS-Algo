class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(int i=0;i<emails.size();i++){
            string temp="";
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j]=='.')continue;
                if(emails[i][j]=='+'){
                    while(emails[i][j]!='@')j++;

                }
                if(emails[i][j]=='@'){
                    while(j!=emails[i].size()){
                        temp+=emails[i][j];
                        j++;
                    }
                    continue;
                }
                temp+=emails[i][j];
            }
            s.insert(temp);
        }
        return s.size();
    }
};