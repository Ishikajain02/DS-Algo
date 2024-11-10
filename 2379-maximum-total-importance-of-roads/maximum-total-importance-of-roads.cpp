class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        //assign value as indegree then add max sum vali road
        vector<long long>indegree(n,0);
        for(int i=0;i<roads.size();i++){
            indegree[roads[i][0]]++;
            indegree[roads[i][1]]++;
        }
        for(int i=0;i<n;i++)cout<<indegree[i]<<" ";
        priority_queue<pair<long,long>>pq;
        for(int i=0;i<n;i++)pq.push({indegree[i],i});
        map<long,long>mp;
        long i=n;
        while(!pq.empty()){
         //   int in=pq.top().first;
            int node=pq.top().second;
            mp[node]=i;
            //cout<<node<<" "<<in<<endl;
            i--;
            
            pq.pop();
        }
        long long ans=0;
        for(int i=0;i<roads.size();i++){
            ans+=mp[roads[i][0]];
            ans+=mp[roads[i][1]];
        }
        return ans;
    }
};