class Solution {
public:
bool overlap(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
   if(ax1<bx2 && ay1<by2 && bx1<ax2 && by1<ay2)return true;
   return false;
}
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1= (ax2-ax1)*(ay2-ay1);
        int area2 = (bx2-bx1)*(by2-by1);
        if(!overlap(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2)){
            return area1+area2;
        }
        else{
            int diff = (min(bx2,ax2)-max(ax1,bx1))*(min(ay2,by2)-max(by1,ay1));
            return area1+area2-diff;
        }
        return 0;
    }
};