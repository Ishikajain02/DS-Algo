class CustomStack {
public:
stack<int>st;
int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size){
            st.push(x);
        }
    }
    
    int pop() {
        if(!st.empty()){
         int val=st.top();
         st.pop();
         return val;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        vector<int>vc;
        int v=st.size()-k;
        while(v>0){
            vc.push_back(st.top());
            st.pop();
            v--;
        }
        while(!st.empty()){
            vc.push_back(val+st.top());
            st.pop();
        }
        for(int i=vc.size()-1;i>=0;i--){
            st.push(vc[i]);
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */