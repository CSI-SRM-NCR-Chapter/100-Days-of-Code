class MyCalendarTwo {
    map<int, int> mp;
public:
    MyCalendarTwo() {}
    
    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;

        int freq = 0;
        for (auto [key, val]: mp) {
            freq += val;
            if (start <= key and end > key and freq > 2) {
                mp[start]--;
                mp[end]++;
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
