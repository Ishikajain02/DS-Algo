class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>vc(m,vector<int>(n,-1));
        for(int i=0;i<walls.size();i++){
            int src=walls[i][0];
            int slc=walls[i][1];
            vc[src][slc]=0;

        }
         for(int i=0;i<guards.size();i++){
            int src=guards[i][0];
            int slc=guards[i][1];
            vc[src][slc]=2;

        }
        
        for(int i=0;i<guards.size();i++){
            int src=guards[i][0];
            int slc=guards[i][1];
           
            src++;
            while(src<m){
                 if(vc[src][slc]==0 || vc[src][slc]==2 )break;
                vc[src][slc]=1;
                src++;
            }
              src=guards[i][0];
              slc++;
             while(slc<n){
                if(vc[src][slc]==0|| vc[src][slc]==2)break;
                vc[src][slc]=1;
                slc++;
             }
             slc=guards[i][1];
             src--;
             while(src>=0){
                  if(vc[src][slc]==0|| vc[src][slc]==2)break;
                vc[src][slc]=1;
                src--;


             }
             src=guards[i][0];
             slc--;
             while(slc>=0){
                  if(vc[src][slc]==0|| vc[src][slc]==2)break;
                vc[src][slc]=1;
                slc--;
             }

        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vc[i][j]==-1)ans++;
            }
        }
        return ans;
    }
};