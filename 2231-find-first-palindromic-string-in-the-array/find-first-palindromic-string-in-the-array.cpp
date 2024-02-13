class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            string n= words[i];
            bool val =false;
            int size=n.size();
            if(size==1){
                ans=n;
                break;
            }
            for(int i=0;i<size/2;i++){
                if(n[i]==n[size-i-1]){
                  //  continue;
                    val=true;
                    continue;
                }
                else {
                    val=false;
                    break;
                }
            }
            if(val){
               ans=n;
               break;
            }
        
        }
        return ans;
    }
};