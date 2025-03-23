class Solution {
public:
void travel(vector<bool>&vis,vector<vector<int>>&adj,int src){
    vis[src]=true;
    for(int i=0;i<adj[src].size();i++){
        if(!vis[adj[src][i]]){
            travel(vis,adj,adj[src][i]);
        }
    }
}
int intersect(vector<int>prop1,vector<int>prop2){
    int i=0,j=0;
    int ans=0;
    while(i<prop1.size() && j<prop2.size()){
        if(prop1[i]==prop2[j])ans++;
        if(prop1[i]<prop2[j])i++;
        else j++;
    }
    return ans;
}
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        //firstly sort both the arrays of properties graph
        for(int i=0;i<properties.size();i++){
            sort(properties[i].begin(),properties[i].end());
          properties[i].erase(unique(properties[i].begin(), properties[i].end()), properties[i].end());

        }
        int n=properties.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<properties.size();i++){
          //  int cnt=0;
            for(int j=i+1;j<properties.size();j++){
              int cnt=intersect(properties[i],properties[j]);
              if(cnt>=k){
                adj[i].push_back(j);
                adj[j].push_back(i);
              } 
            }
        }
        //now norml connected componenets
        int ans=0;
        vector<bool>vis(properties.size(),false);
        for(int i=0;i<vis.size();i++){
            if(vis[i]==false){
             ans++;
             travel(vis,adj,i);
            }
        }
        return ans;
    }
};