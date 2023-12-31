class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int start = 0;
            int end = matrix[0].size()-1;
            int  mid ;

            while(start<=end){
                mid = start + (end - start)/2;
                if(matrix[i][mid]==target)return true;
                else if(matrix[i][mid]>target)end= mid-1;
                else start=mid+1;
            }
        }
        return false;
    }
};