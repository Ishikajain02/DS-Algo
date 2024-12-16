class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ans=events[0][1];
        int f=events[0][0];
        for(int i=0;i<events.size()-1;i++){
            if(events[i+1][1]-events[i][1]==ans){
                f=min(events[i+1][0],f);
            }
            if((events[i+1][1]-events[i][1])>ans){
                ans=events[i+1][1]-events[i][1];
                
                f=events[i+1][0];
            }
        }
       // if(ans==events[0][1])return events[0][0];
        return f;
    }
};