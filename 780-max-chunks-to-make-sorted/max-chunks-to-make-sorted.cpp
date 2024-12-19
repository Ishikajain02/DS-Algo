class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //make chunks for decreasing order and the remaining one as single indentity
        int maxi=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            if(maxi==i)cnt++;
        }
        return cnt;
    }
};