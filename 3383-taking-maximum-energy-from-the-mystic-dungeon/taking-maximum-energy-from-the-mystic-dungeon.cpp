class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int answer=INT_MIN;
        reverse(energy.begin(),energy.end());
        for(int i=0;i<k;i++){
            int sum=0;
            for(int j=i;j<energy.size();j+=k){
             sum+=energy[j];
             // answer=max(answer,sum);
             answer=max(answer,sum);

            }
        }
        return answer;
    }
};