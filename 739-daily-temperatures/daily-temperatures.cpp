class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>vc(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
           while(!st.empty() && (temperatures[st.top()]<temperatures[i])){
               int x= st.top();
               st.pop();
               vc[x]=(i-x);

           }
            st.push(i);

        }
        return vc;
    }
};