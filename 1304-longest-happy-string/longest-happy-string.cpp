class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        //longest string
    priority_queue<pair<int,char>>pq;
    if(a>0)pq.push({a,'a'});
    if(b>0)pq.push({b,'b'});
    if(c>0)pq.push({c,'c'});
    string ans="";
    while(!pq.empty()){
     pair<int,char>p=pq.top();
     pq.pop();
     int size=ans.length();
     if(size>=2 && ans[size-1]==p.second&& ans[size-2]==p.second){
        if(pq.empty())break;
        pair<int,char>pc=pq.top();
        pq.pop();
        ans+=pc.second;
        pc.first--;
     if(pc.first!=0)pq.push(pc);
     }
     else{
        p.first--;
        ans+=p.second;
       
     }
      if(p.first>0)pq.push(p);
      cout<<pq.top().first<<" "<<pq.top().second<<endl;
    }
    return ans;
    }
};