class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>ans;
        set<string>s;
        vector<string>dish;
        for(int i=0;i<orders.size();i++){
            dish.push_back(orders[i][2]);
        }
        sort(dish.begin(),dish.end());
        for(int i=0;i<dish.size();i++){
            s.insert(dish[i]);
        }
        vector<string>v;
        v.push_back("Table");
      for(auto &it:s){
          v.push_back(it);
      }
    //  sort(v.begin()+1,v.end());
      ans.push_back(v);
     // return ans;
     map<int,map<string,int>>mp;

     for(int i=0;i<orders.size();i++){
       mp[stoi(orders[i][1])][orders[i][2]]++;
     }
     
     for(auto it:mp){
      vector<string>f;
      f.push_back(to_string(it.first));
     // int wow = it.second;
      for(auto j:s){
        f.push_back(to_string(it.second[j]));
      }
      ans.push_back(f);
     }
     return ans;
    }
};