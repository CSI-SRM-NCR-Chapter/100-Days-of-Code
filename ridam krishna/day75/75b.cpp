class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        int res=1;
        unordered_set<char> ust;
        ust.insert(s[0]);
        for(int i=1; i<n; i++){
            if(ust.find(s[i])!=ust.end()){
                res++;
                ust.clear();
                ust.insert(s[i]);
            }
            ust.insert(s[i]);
        }
        return res;
        
    }
};
