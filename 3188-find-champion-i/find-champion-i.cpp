class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        //print row that has more number of ones in it
        int row=-1;
        int maxi=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(grid[i][j]==1){
                    sum++;
                }

            }
            if(sum>maxi){
                maxi=sum;
                row=i;
            }
            cout<<sum<<" "<<maxi<<endl;
        }
        return row;
    }
};