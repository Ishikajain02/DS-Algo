class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //simply using the brute force of counting
        int fi=INT_MAX;
        for(int i=0;i<blocks.size()-k+1;i++){
            int cnt=k;
            int op=0;
            int tt=0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='W' ){
                    op++;
                tt++;
                }
                else tt++;
            }
            if(tt==k){
                fi=min(op,fi);
            }

        }
return fi;
    }
};