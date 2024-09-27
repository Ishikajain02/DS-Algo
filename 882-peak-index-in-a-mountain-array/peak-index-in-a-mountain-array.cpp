class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //log n -> binary search
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2; // Corrected mid calculation
            
            // Check bounds before accessing arr[mid-1] and arr[mid+1]
            if (mid > 0 && mid < arr.size() - 1 && 
                arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                return mid;
            } else if (mid > 0 && arr[mid - 1] > arr[mid]) {
                end = mid - 1; // Move left
            } else {
                start = mid + 1; // Move right
            }
        }
        return 0; // This line is not expected to be reached
    }
};