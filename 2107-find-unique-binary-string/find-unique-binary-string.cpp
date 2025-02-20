class Solution {
public:
string fn(vector<string>&nums,set<string>s,string t,int n){
    if(t.size()==n){
        if(s.count(t)==0)return t;
        else return "";
    }
    
    string take=fn(nums,s,t+'0',n);
    if(take.size()>0)return take;
    string nottake=fn(nums,s,t+'1',n);
    return nottake;
}
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        set<string>s;
        for(int i=0;i<n;i++)s.insert(nums[i]);
        return fn(nums,s,"",n);
    }
};