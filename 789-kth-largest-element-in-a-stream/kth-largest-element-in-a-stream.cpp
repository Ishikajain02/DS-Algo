class KthLargest {
public:
vector<int>vc;
int value;
    KthLargest(int k, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vc=nums;
        value=k;

    }
    
    int add(int val) {
        int start=bs(vc,val);
           if (start < 0) start = 0;
        if (start > vc.size()) start = vc.size();
        vc.insert(vc.begin()+start,val);
        return vc[vc.size()-value];
    }
    int bs(vector<int>&nums,int val){
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==val)return mid;
            else if(nums[mid]>val)end=mid-1;
            else start=mid+1;
        }
        return start;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */