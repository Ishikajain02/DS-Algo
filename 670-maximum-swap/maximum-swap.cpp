class Solution {
public:
    int maximumSwap(int num) {
        //priority queue
        string nums=to_string(num);
        vector<int>vc(10,-1);
     priority_queue<int>pq;
     for(int i=0;i<nums.size();i++){
        pq.push({nums[i]-'0'});
        vc[nums[i]-'0']=i;
     }
     //we should store the last occurence only
     vector<int>occr(10,-1);
     for(int i=0;i<nums.size() ;i++){
       // cout<<pq.top().first<<endl;
          if(nums[i]-'0'!=pq.top()){
            cout<<i<<" "<<pq.top()<<endl;
            swap(nums[i],nums[vc[pq.top()]]);
            pq.pop();
            break;
        }
        else pq.pop();
     }
     return stoi(nums);
    }
};