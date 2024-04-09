class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t=0;

        queue<pair<int,int>>q;
        for(int i=0;i<tickets.size();i++){
            q.push({tickets[i],i});
        }

        while(!q.empty()){
            int val=q.front().first;
                int ind=q.front().second;
            if(val-1==0 && q.front().second==k){
                t++;
                break;
            }
            else if(q.front().first==0){
                q.pop();
            }
            else {
                
                q.pop();
                q.push({val-1,ind});
                t++;
            }
        }
        return t;
    }
};