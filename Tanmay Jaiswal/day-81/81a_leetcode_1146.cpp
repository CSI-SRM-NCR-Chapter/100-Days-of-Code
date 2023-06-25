class SnapshotArray {
    vector<vector<pair<int,int>>> arr;
    int calls = 0;
public:
    SnapshotArray(int length) {
        arr.resize(length);
        for (int i=0; i<length; i++) arr[i].push_back({0,0});
    }
    
    void set(int index, int val) {
        arr[index].push_back({calls, val});
    }
    
    int snap() {
        return calls++;
    }
    
    int get(int index, int snap_id) {
        auto it = upper_bound(arr[index].begin(), arr[index].end(), make_pair(snap_id, INT_MAX));
        return prev(it)->second;
    }
};
