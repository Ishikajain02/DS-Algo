class Solution {
public:
    int find(int node, vector<int>&parent){
        if(parent[node]==node)return node;
        return parent[node]=find(parent[node],parent);
    }
    void unioni(int x,int y,vector<int>&parent,vector<int>&rank){
        int parent1=find(x,parent);
        int parent2=find(y,parent);
        if(parent1==parent2)return;
        if(rank[parent1]==rank[parent2]){
            parent[parent2]=parent1;
            rank[parent1]++;

        }
        else if(rank[parent1]>rank[parent2]){
            parent[parent2]=parent1;
        }
        else parent[parent1]=parent2;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        //count extra edges
        //counting extra cables and filling parent array
          if(connections.size()<n-1)return -1;
       vector<int>parent(n,0);
       vector<int>rank(n,1);
       for(int i=0;i<n;i++){
        parent[i]=i;
       }
     
       int edges=0;
       for(int i=0;i<connections.size();i++){
         int parent1=find(connections[i][0],parent);
         int parent2=find(connections[i][1],parent);
         if(parent1==parent2)edges++;
         else unioni(parent1,parent2,parent,rank);
       }
       int cnt=0;
       for(int i=0;i<n;i++){
       if(parent[i]==i)cnt++;
       }
       if(cnt-1<=edges)return cnt-1;
       else return -1;
    }
};