class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<pair<int,int>>vc;
        for(int i=0;i<customers.size();i++){
            vc.push_back({grumpy[i],customers[i]});
        }
        int maxi=0,maxim=0;
        int left=0;
        for(int right=0;right<vc.size();right++){
            if(vc[right].first==1)maxi+=vc[right].second;
            while(right-left+1>minutes){
                if(vc[left].first==1)maxi-=vc[left].second;
                left++;
            }
            maxim=max(maxim,maxi);
            
        }
        for(int i=0;i<vc.size();i++){
            if(vc[i].first==0)maxim+=vc[i].second;
        }
        return maxim;
    }
};