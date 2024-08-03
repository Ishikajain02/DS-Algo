class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>vc(10,0);
        vector<int>vc2(10,0);
        for(int i=0;i<arr.size();i++){
            vc[arr[i]%10]++;
        }
        for(int i=0;i<target.size();i++){
            vc2[target[i]%10]++;
        }
        return vc==vc2;
    }
};