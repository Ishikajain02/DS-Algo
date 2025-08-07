class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        //left to righht;
        int ans=0;
        stack<int>st;
        st.push(weight[0]);
        for(int i=1;i<weight.size();i++){
            if(!st.empty()){
            if(weight[i]<st.top()){
                ans++;
                st.pop();
            }
        
            else{
                st.pop();
                st.push(weight[i]);
            }
            }
            else st.push(weight[i]);
        }
        return ans;
    }
};