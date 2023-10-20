class MinStack {
public:
   map<int,int>mp;
   vector<int>v;
    MinStack() {
       // return null;
    }
    
    void push(int val) {
        //int count=0
      //  count=min(count,val);
      v.push_back(val);
        mp[val]++;
    }
    
    void pop() {
        //int count=mp.size();
      int p = v[v.size()-1];
      v.pop_back();
      if(mp[p]==1)mp.erase(p);
      else mp[p]--;
    }
    
    int top() {
       return v[v.size()-1];
    }
    
    int getMin() {
        auto it= mp.begin();
        return it->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */