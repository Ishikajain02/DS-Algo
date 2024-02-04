class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1=(ax2-ax1)*(ay2-ay1);
        int b1=(bx2-bx1)*(by2-by1);
        if(ay1>=by2 || ay2<=by1 || ax2<=bx1 || bx2<=ax1)return a1+b1;
     //   if(a1==0)return b1;
       // if(b1==0)return a1;
        int xo= min(bx2,ax2)-max(bx1,ax1);
        int yo=min(by2,ay2)-max(by1,ay1);
        return a1+b1-(xo*yo);
    }
};