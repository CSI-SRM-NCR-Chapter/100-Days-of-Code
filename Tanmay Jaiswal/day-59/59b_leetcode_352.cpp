class SummaryRanges {
    set<int> Set;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        Set.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if (Set.empty()) return {};

        vector<vector<int>> ans;
        int s = -1, e = -1;

        for (auto i: Set) {
            if (s < 0) s = e = i;
            else if (i == e+1) e = i;
            else {
                ans.push_back({s, e});
                s = e = i;
            }
        }

        ans.push_back({s, e});
        
        return ans;
    }
};
