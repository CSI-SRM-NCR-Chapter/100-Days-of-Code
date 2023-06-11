class MyCalendarTwo {
    map<int, int> one, two;

    static void do_insert(map<int, int> &mp, int start, int end) {
        auto p = mp.lower_bound(start);
        if (p != mp.begin()) {
            auto pp = prev(p);
            if (pp->second >= start) {
                end = max(pp->second, end);
                while (p != mp.end()) {
                    if (p->first > end) break;
                    end = max(end, p->second);
                    p = mp.erase(p);
                }
                pp->second = end;
                return;
            }
        }
        while (p != mp.end()) {
            if (p->first > end) break;
            end = max(end, p->second);
            p = mp.erase(p);
        }
        mp.emplace(start, end);
    }
public:
    bool book(int start, int end) {
        assert(start < end);
        {
            auto p = two.lower_bound(start);
            if (p != two.begin() && prev(p)->second > start) {
                return false;
            }
            if (p != two.end() && p->first < end) {
                return false;
            }
        }
        auto p = one.lower_bound(start);
        if (p != one.begin()) {
            auto pp = prev(p);
            if (pp->second > start) {
                do_insert(two, start, min(pp->second, end));
            }
        }
        for (; p != one.end(); ++p) {
            if (end <= p->first) break;
            do_insert(two, p->first, min(end, p->second));
        }
        do_insert(one, start, end);
        return true;
    }
};
