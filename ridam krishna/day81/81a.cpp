class SnapshotArray {
public:
    map<int,map<int,int>>mp;
    int count=0; //ntme
    SnapshotArray(int length) {
    
    }
    void set(int index, int val) {   
        mp[index][count]=val;
    }
    int snap() {   
        count++;
        return count-1;
    }
    int get(int index, int snap_id) {   
        auto it = mp[index].lower_bound(snap_id+1);
        int v=0;
        if(it!=mp[index].begin()){
            it--;
            v=it->second;
        }
        return v;
    }
};
/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
