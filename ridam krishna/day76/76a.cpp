class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(begin(citations), end(citations));
        int i=0, res=INT_MAX;
        int n=citations.size(); //ntme
        for(i=1; i<=n; i++){
            if(citations[n-i]<i) break;
        }
        return i-1;
    }
};
