class MyCalendar {
public:
 vector<pair<int,int>>booking; 
    MyCalendar() {
    //   vector<pair<int,int>>book; 
    }
    
    bool book(int start, int end) {
        for(auto it:booking){
            if(it.second>start && it.first<end)return false;
        }
        booking.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */