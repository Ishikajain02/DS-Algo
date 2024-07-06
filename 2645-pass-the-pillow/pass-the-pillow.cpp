class Solution {
public:
    int passThePillow(int n, int time) {
     //1 round=n-1
     //2 round n-2
      /* if(n>time)return time+1;
      /*  n-2 divide
        5/2
        2
        2/1
        return ceil(time/(n-2));*/
        bool fit=false;
        int ind=0;
        while(time!=0){
            if(fit==false){
                for(int i=2;i<=n && time>0;i++){
                    
                    time--;
                    ind=i;
                }
                fit=true;
            }
            else{
                for(int i=n;i>=2 && time>0 ;i--){
                    time--;
                    ind=i-1;
                }
                fit=false;
            }

        }
        return ind;
    }
};