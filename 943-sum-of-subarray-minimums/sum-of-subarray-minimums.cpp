class Solution {
public:
void fnp(vector<int>&in,int n,vector<int>&arr){
stack<pair<int,int>>st;
for(int i=0;i<n;i++){
    while(!st.empty() && st.top().first>arr[i])st.pop();
    if(st.empty())in[i]=-1;
    else in[i]=st.top().second;
    st.push({arr[i],i});
}
}
//next smallest element
void fnn(vector<int>&nn,int n, vector<int>&arr){
    stack<pair<int,int>>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top().first>=arr[i])st.pop();
        if(st.empty())nn[i]=n;
        else nn[i]=st.top().second;
        st.push({arr[i],i});
    }
}

    int sumSubarrayMins(vector<int>& arr) {
        //take nse and pse and calculate the range and take left*right*that number
        vector<int>previn(arr.size());
        vector<int>nextin(arr.size());
        fnp(previn,arr.size(),arr);
        fnn(nextin,arr.size(),arr);
        for(int i=0;i<arr.size();i++)cout<<previn[i]<<" ";
        cout<<endl;
        for(int i=0;i<arr.size();i++)cout<<nextin[i]<<" ";
        int ans=0;
        int mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            int left=i-previn[i];
            int right=nextin[i]-i;
           // if(previn[i]==-1)previn[i]=1;
            //if(nextin[i]==-1)nextin[i]=1;
      long long prev = ((long long)(left % mod) * (right % mod)) % mod;  // Use long long for multiplication
ans = (ans + (((prev * (arr[i] % mod)) % mod) % mod)) % mod;  // Ensure modulus at each step

        }
        return ans;
    }
};