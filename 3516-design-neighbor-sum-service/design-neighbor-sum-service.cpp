class neighborSum {
public:
vector<vector<int>>vc;
    neighborSum(vector<vector<int>>& grid) {
        vc=grid;
    }
    
    int adjacentSum(int value) {
        int i,j;
        int ans=0;
        for(i=0;i<vc.size();i++){
            bool f=false;
            for(j=0;j<vc[i].size();j++){
                if(vc[i][j]==value){
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
        if(i-1>=0)ans+=vc[i-1][j];
        if(i+1<vc.size())ans+=vc[i+1][j];
        if(j-1>=0)ans+=vc[i][j-1];
        if(j+1<vc.size())ans+=vc[i][j+1];
        return ans;
    }
    
    int diagonalSum(int value) {
        int ans=0;
        int i,j;
        for(i=0;i<vc.size();i++){
            bool f=false;
            for(j=0;j<vc[i].size();j++){
                if(vc[i][j]==value){
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
        if(i-1>=0 && j-1>=0)ans+=vc[i-1][j-1];
        if(i-1>=0 && j+1<vc[i].size())ans+=vc[i-1][j+1];
        if(i+1<vc.size()&& j-1>=0)ans+=vc[i+1][j-1];
        if(i+1<vc.size() && j+1<vc[i].size())ans+=vc[i+1][j+1];
        return ans;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */