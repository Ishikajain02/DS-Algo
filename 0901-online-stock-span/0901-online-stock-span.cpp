class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count =1;
          /* ans.push_back(price);
        for(int i=ans.size()-1;i>=0;i--){
          if(ans[i]<=price)count++;
          else break;
        }
     
        return count;
       */
       //another approach
        while(!st.empty() &&st.top().first<=price){
          count+= st.top().second;
          st.pop();
        }
        st.push({price,count});
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */