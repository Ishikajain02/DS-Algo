class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
     vector<int>vc;
     set<int>s;
     for(int i=0;i<bulbs.size();i++){
            if(s.find(bulbs[i])==s.end()){
                s.insert(bulbs[i]);
            }
            else s.erase(bulbs[i]);
     }   
     for(auto it:s){
        vc.push_back(it);
     }
     return vc;
    }
};