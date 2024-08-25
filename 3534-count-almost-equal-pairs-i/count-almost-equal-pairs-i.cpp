class Solution {
public:
bool check(string one,string two){
    while(one.size()<two.size()){
        one="0"+one;
    }
    while(one.size()>two.size()){
        two="0"+two;
    }
    int diff=0;
    int a=-1,b=-1;
    for(int i=0;i<one.size();i++){
        if(one[i]!=two[i]){
            diff++;
        if(diff==1){
            a=i;
        }
        else if(diff==2) b=i;
        else return false;
        }
    }
    if(diff==2 ){
        swap(one[a],one[b]);
    }
    if(one==two)return true;
    return false;
}
    int countPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]|| check(to_string(nums[i]),to_string(nums[j])))ans++;
            }
        }
        return ans;
    }
};