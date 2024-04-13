class CustomStack {
public:
vector<int>vc;
int top=-1;
int size;
    CustomStack(int maxSize) {
        size=maxSize;
        vc.resize(size);
    }
    
    void push(int x) {
        if(top+1!=size){
            top++;
          vc[top]=x;
          
        }
    }
    
    int pop() {
        int ans=-1;
        if(top==-1)return ans;
      else{  
        ans=vc[top];
        top--;
     
      }
      return ans;
    }
    
    void increment(int k, int val) {
       if(top>=0){
            for(int i=0;i<min(k,top+1);i++){
                vc[i]+=val;
            }
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