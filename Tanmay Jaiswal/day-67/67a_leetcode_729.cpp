class MyCalendar {
    map<int, int> mp;
public:
    MyCalendar() {}
    
    bool book(int start, int end) {
       for (auto [s, e]: mp) {
           if (s < end and start < e) return false;
       }

       mp[start] = end;
       return true;
    }
};
