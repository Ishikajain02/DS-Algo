class Solution {
public:
    int minimumLength(string s) {
        deque<int>q;
        for(auto it:s){
            q.push_back(it);
        }
        while(!q.empty()&& q.size()!=1){
            char ch=q.front();
            if(q.front()==ch && q.back()==ch){
                while(q.front()==ch && !q.empty()){
                    q.pop_front();
                }
                while(q.back()==ch && !q.empty()){
                    q.pop_back();
                }
            }
            else break;
        }
        return q.size();
    }
};