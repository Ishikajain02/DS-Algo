class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        vector<int>ans;
        int carry=0;
        int val=digits[0]+1;
           carry=val/10;
        val=val%10;
     
        ans.push_back(val);
        for(int i=1;i<digits.size();i++){
           int s=digits[i]+carry;
           ans.push_back(s%10);
           carry=s/10;
        }
        if(carry!=0)ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};