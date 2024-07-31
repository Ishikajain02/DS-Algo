class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //largest rectangle
        int i=0;
        stack<int>st;
        int maxarea=0;
        int n=heights.size();
        while(i<n){
            if(st.empty() || heights[i]>=heights[st.top()])st.push(i++);
            else{
                int top=st.top();
                st.pop();
                int width=i;
                if(!st.empty())width=i-1-st.top();
                maxarea=max(maxarea,heights[top]*width);

            }
           // i++;
        }
        while(!st.empty()){
            int top=st.top();
            st.pop();
            int width=i;
            if(!st.empty()) width=i-1-st.top();
            maxarea=max(maxarea,width*heights[top]);
        
        }
        return maxarea;
    }
};