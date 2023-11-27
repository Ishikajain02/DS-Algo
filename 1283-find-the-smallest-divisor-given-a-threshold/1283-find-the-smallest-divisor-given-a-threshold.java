class Solution {
    public int smallestDivisor(int[] nums, int threshold) {
        int n = nums.length;
        int lo = 1, hi = 0, ans = 0;
        for(int e : nums)
            hi = Math.max(e,hi);
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum+=Math.ceil((double)nums[i]/(double)mid);
            }
            if(sum <= threshold){
                ans = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        return ans;
    }
}