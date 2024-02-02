class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string t= "123456789";
        vector<int>a;
        for(int i=0;i<9;i++){
            for(int j=i+1;j<=9;j++){
                int g = stoi(t.substr(i,j-i));
                if(g<=high &&g>=low)a.push_back(g);
            }
        }
        sort(a.begin(),a.end());
        return a;
    }
};