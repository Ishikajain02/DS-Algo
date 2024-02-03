class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            string t= to_string(nums[i]);
            string n=" ";
            for(int j=0;j<t.length();j++){
                n+=to_string(mapping[t[j]-'0']);
            }
            int a = stoi(n);
            int f= stoi(t);
            ans.push_back({a,i});
        }
        sort(ans.begin(),ans.end());
        vector<int>d;
        for(auto it:ans){
            d.push_back(nums[it.second]);
        }
        return d;

    }
};