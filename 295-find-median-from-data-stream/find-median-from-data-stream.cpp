class MedianFinder {
public:
     priority_queue<int>maxheap;
        priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
   
    }
    
    void addNum(int num) {
      //  if(maxheap.empty())maxheap.push(num);
        if( maxheap.empty() ||maxheap.top()>=num){
            maxheap.push(num);
        }
        else minheap.push(num);
        if(abs((int)maxheap.size()-(int)minheap.size())>1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if (minheap.size()>maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
      
    }
    
    double findMedian() {
      double ans=0;
        if(minheap.size()==maxheap.size()){
             ans=(minheap.top()+maxheap.top())/2.0;
        }
        else {
             ans=maxheap.top();
            //return ans;
        }  
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */