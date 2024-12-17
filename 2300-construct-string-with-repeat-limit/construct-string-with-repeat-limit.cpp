class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        map<char,int>mp;
        priority_queue<char>pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
          //  pq.push(s[i]);
        }
        for(auto it:mp)pq.push(it.first);
        string ans="";
    
       while(!pq.empty()){
         char top=pq.top();
         pq.pop();
         int f=min(mp[top],repeatLimit);
         mp[top]-=f;
         if(mp[top]==0)mp.erase(top);
         while(f--)ans+=top;
         if(mp[top]>0 && !pq.empty()){
            char again=pq.top();
            pq.pop();
            ans+=again;
            mp[again]--;
            if(mp[again]==0){
                mp.erase(again);
            }
            if(mp[again]>0)pq.push(again);
            pq.push(top); 
         }
        }
        return ans;
    }
};