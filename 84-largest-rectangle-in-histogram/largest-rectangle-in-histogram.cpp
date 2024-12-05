class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //brute force take the conecpt of pse and nse same as previous ques
        //just calculate on the fly
     stack<int>st;
     int maxi=0;
     for(int i=0;i<heights.size();i++){
        //if(st.empty())st.push(i);
        while(!st.empty() &&heights[i]<heights[st.top()]){
          int nse=i;
          int curr=st.top();
          st.pop();
          int pse=st.empty()?-1:st.top();
          maxi=max(maxi,heights[curr]*(nse-pse-1));
        }
        st.push(i);
     }
     int n=heights.size();
     while(!st.empty()){
        int curr=st.top();
        st.pop();
        int nse=n;
        int pse=st.empty()?-1:st.top();
          maxi=max(maxi,heights[curr]*(nse-pse-1));
     }
     return maxi;
    }
};