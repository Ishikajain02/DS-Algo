class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       // sum of first i+1 elements >= sum of last n-i-1 elements
    //i think the approach should be prefixsum and suffixsum mostly
  //  vector<int>prefixsum,sum;
    long long prefix=0;
    long long sum=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)sum+=nums[i];
    for(int i=0;i<nums.size()-1;i++){
        prefix+=nums[i];
       // prefixsum.push_back(prefix);
       if(prefix>=(sum-prefix)){
        ans++;
        cout<<prefix<<" "<<sum-prefix<<endl;
       }
        
    }
   
    return ans;

    }
};