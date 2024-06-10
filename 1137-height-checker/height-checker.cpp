class Solution {
public:
    int heightChecker(vector<int>& heights) {
        //increasing
        int cnt=0;
        vector<int>arr=heights;
        sort(arr.begin(),arr.end());
        for(int i=0;i<heights.size();i++){
           if(heights[i]!=arr[i])cnt++;
        }
        //if(heights[heights.size()])
        return cnt;
    }
};