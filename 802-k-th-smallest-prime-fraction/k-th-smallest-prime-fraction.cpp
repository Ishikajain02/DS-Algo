class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int>answer;
        vector<pair<double,pair<int,int>>>vc;
        for(int i=0;i<arr.size();i++){
           for(int j=i+1;j<arr.size();j++){
            double fraction = static_cast<double>(arr[i]) / arr[j];
                vc.push_back({fraction, {i, j}});
           }
        }
        sort(vc.begin(),vc.end());
        cout<<vc[k-1].first;
        int first=vc[k-1].second.first;
        int second=vc[k-1].second.second;
        answer.push_back(arr[first]);
        answer.push_back(arr[second]);
        return answer;
    }
};