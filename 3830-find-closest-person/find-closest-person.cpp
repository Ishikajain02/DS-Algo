class Solution {
public:
    int findClosest(int x, int y, int z) {
        int diff=abs(z-x);
        int diff2=abs(z-y);
        if(diff2>diff)return 1;
        if(diff==diff2)return 0;
        return 2;
    }
};