class Solution {
public:
  bool unique(string s){
    set<char>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()==s.size())return true;
    return false;
  }
  void dfs(vector<string>&arr,string temp,int curr,int &maxi){
    if(!unique(temp))return ;
    if(curr>=arr.size()){
        int size=temp.size();
     maxi=max(maxi,size);
     return;
    }
    
    dfs(arr,temp+arr[curr],curr+1,maxi);
    dfs(arr,temp,curr+1,maxi);
  }
    int maxLength(vector<string>& arr) {
        int maxi=0;
        string temp="";
        dfs(arr,temp,0,maxi);
        return maxi;
    }
};