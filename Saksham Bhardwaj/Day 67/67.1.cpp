class MyCalendar {
public:
    map<int,int> m;
    MyCalendar() {
        
    }
    //only 1 event can be there for that in sorted value of map no starts values should be adjecent 
    bool canAdd(int n){
        int cnt=0;
        for(auto it=m.begin();it!=m.end();it++){
            cnt+=it->second;
            if(cnt>n)return false;
        }
        return true;
    }

    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        if(canAdd(1))return true;
        else{
            m[start]--;
            m[end]++;
            return false;
        }
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
