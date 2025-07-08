class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int,vector<int>,greater<int>>pq;
        sort(events.begin(),events.end());
        int i=0,day=events[0][0];
        int ans=0;
        while(i<events.size() || !pq.empty()){
            if(pq.empty()){
                day=events[i][0];
            }
            while( i<events.size() && events[i][0]==day ){
                pq.push(events[i][1]);
                i++;

            }
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
             day++;
            while(!pq.empty() && pq.top()<day){
                pq.pop();
            }
           
        }
        return ans;
    }
};