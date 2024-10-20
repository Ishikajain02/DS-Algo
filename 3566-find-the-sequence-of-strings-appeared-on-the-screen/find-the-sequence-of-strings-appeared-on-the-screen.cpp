class Solution {
public:
    vector<string> stringSequence(string target) {
        //repeate that string 
        //push the next character
        string final="";
        vector<string>ans;
        for(int i=0;i<target.size();i++){
            int size=final.size();
            if(size>0 && target[i]=='a'){
                final+=target[i];
                ans.push_back(final);
            }
            else{
                int val=target[i]-'a';
                for(int i=0;i<val;i++){
                    final+=('a'+i);
                    ans.push_back(final);
                   final.pop_back();
                   
                }
                final+=target[i];
                ans.push_back(final);
            }
        }
        return ans;
    }
};