class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
     //   sort(spells.begin(),spells.end());
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(int i=0;i<spells.size();i++){
           //binary serach for index
           int start=0,end=potions.size()-1,ind=-1;
           while(start<=end){
            int mid=(start+end)/2;
            long long mul=1ll*potions[mid]*spells[i];
            if(success>mul)start=mid+1;
            else{
             end=mid-1;
             ind=mid;
            } 
           }
           if(ind!=-1)ans.push_back(potions.size()-ind);
           else ans.push_back(0);

        }
        return ans;
    }
};