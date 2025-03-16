class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        //using map and calculating both indexes from front and backwards considering both for taking minimum distance
        int n=nums.size();
        map<int,vector<int>>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
         mp[nums[i]].push_back(i);
        }
        for(auto it:mp){
           // auto p=it.second;
            auto& p = it.second; // Vector of indices
            auto begin_it = p.begin();
            auto end_it = p.end();
            int size=p.size();
            if(size==1){
                nums[p[0]]=-1;
            }
            else{
             /*  for(auto& tt:p){
                if(tt==p.begin()){
                    int forward=*tt-*next(tt);
                    int backward=n-*p.rbegin()+forward;
                    nums[*tt]=min(forward,backward);
                }
                else if(tt==p.end()){
                    int curr=*tt;
                    int forward=n-*tt+*p.begin();
                    int backward=*tt-*prev(tt);
                    nums[*tt]=min(forward,backward);
                }
                else {
                    int curr=*tt;
                    int forward=*next(tt);
                    int backward=*prev(tt);
                    nums[curr]=min(forward,backward);
                }
               } */
               for (auto curr = begin_it; curr != end_it; ++curr) {
                    int forwardDist, backwardDist;

                    if (curr == begin_it) {
                        forwardDist = *next(curr) - *curr;
                        backwardDist = n - *prev(end_it) + *curr;
                    } else if (next(curr) == end_it) {
                        forwardDist = n - *curr + *begin_it;
                        backwardDist = *curr - *prev(curr);
                    } else {
                        forwardDist = *next(curr) - *curr;
                        backwardDist = *curr - *prev(curr);
                    }

                    nums[*curr] = min(forwardDist, backwardDist);
            }
        }
        }
       for(int i=0;i<queries.size();i++){
        queries[i]=nums[queries[i]];
       }
       return queries;
    }
};