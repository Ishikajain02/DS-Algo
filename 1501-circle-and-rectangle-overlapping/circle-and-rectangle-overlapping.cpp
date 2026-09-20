class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x=clamp(xCenter,x1,x2);
        int y=clamp(yCenter,y1,y2);
        int d=sqrt((x-xCenter)*(x-xCenter)+(y-yCenter)*(y-yCenter));
        return d<=radius;
    }
};