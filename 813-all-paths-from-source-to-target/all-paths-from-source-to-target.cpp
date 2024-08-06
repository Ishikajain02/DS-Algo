class Solution {
public:
    void recurr(vector<int>&ans,vector<vector<int>>&graph,vector<bool>&visited,int &val,vector<vector<int>>&vc){
        ans.push_back(val);
        visited[val]=true;
        if(val==graph.size()-1)vc.push_back(ans);
        for(int i=0;i<graph[val].size();i++){
         if(!visited[graph[val][i]])   recurr(ans,graph,visited,graph[val][i],vc);
        }
        ans.pop_back();
        visited[val]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        //take and not take
        
      //  for(int i=0;i<)
        vector<vector<int>>vc;
        int n=graph.size();
        vector<bool>visited(n,false);
        visited[0]=true;
        for(int i=0;i<graph[0].size();i++){
         vector<int>ans;
         ans.push_back(0);
         recurr(ans,graph,visited,graph[0][i],vc);
       //  vc.push_back(ans);       
        }
        return vc;
    }
};