class Solution {
public:
    bool canChange(string start, string target) {
        stack<pair<char,int>>st;
        stack<pair<char,int>>st2;
        for(int i=0;i<start.size();i++){
          if(start[i]!='_')st.push({start[i],i});
        }
        for(int i=0;i<target.size();i++){
            if(target[i]!='_')st2.push({target[i],i});
        }
        if(st.size()!=st2.size())return false;
        while(!st.empty() && !st2.empty()){
            if(st.top().first!=st2.top().first){
                return false;
            }
            else{
                if(st.top().first=='L' && st.top().second<st2.top().second){
                    return false;
                }
                else if(st.top().first=='R' && st.top().second>st2.top().second)return false;
            }
            st.pop();st2.pop();
        }
        return true;
    }
};