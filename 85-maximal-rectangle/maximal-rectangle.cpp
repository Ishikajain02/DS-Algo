class Solution {
public:
int histo(vector<int>&vc){
    int maxi=0;
    stack<int>st;
    int n=vc.size();
    for(int i=0;i<n;i++){
        while(!st.empty() && vc[i]<vc[st.top()]){
            int nse=i;
            int curr=st.top();
            st.pop();
            int pse=st.empty()?-1:st.top();
            maxi=max(maxi,vc[curr]*(nse-pse-1));
        }
        st.push(i);
    }
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        int nse=n;
        int pse=st.empty()?-1:st.top();
        maxi=max(maxi,vc[curr]*(nse-pse-1));
    }
    return maxi;

}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int sum=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>mat(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            sum=0;
            for(int j=0;j<n;j++){
                if(matrix[j][i]=='1'){
                    sum++;

                mat[j][i]=sum;
                }
                else {
                    sum=0;
                    mat[j][i]=0;
                }
            }
        }
        //now same as largest histogram code
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,histo(mat[i]));
        }
        return ans;
    }
};