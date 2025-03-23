class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int total=n*n;
        int div=maxWeight/w;
        if(div>total)return total;
        return div;
    }
};