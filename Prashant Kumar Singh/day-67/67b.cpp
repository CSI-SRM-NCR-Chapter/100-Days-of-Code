class MyCalendarTwo {
public:
    map<int,int> m;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        int sum = 0;
        m[start]++;
        m[end]--;
        map<int,int>::iterator i;
        for (i=m.begin();i != m.end();i++) {
            sum = sum + i->second;
            if (sum >= 3) {
                m[start]--;
                m[end]++;
                return false;
            }
        } 
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
