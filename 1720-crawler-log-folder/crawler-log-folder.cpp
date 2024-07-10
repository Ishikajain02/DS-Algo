class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int>st;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../" ){
             //   cout<<st.top();
             if(!st.empty())st.pop();
             else continue;
              
            }
            else if(logs[i]=="./")continue;
            else{
                st.push(i);
            }
        }
        return st.size();
    }
};