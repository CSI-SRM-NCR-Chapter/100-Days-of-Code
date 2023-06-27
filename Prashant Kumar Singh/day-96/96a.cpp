class Solution {
public:
    static bool comp(const int &a, const int &b){
        int mask = 1;
        while(true)
        if((a & mask) == (b & mask)) mask = mask<<1;
        else return (a & mask) > (b & mask);
        }

    vector<int> beautifulArray(int n) {
        vector<int> res;
        while(n) res.push_back(n--);
        sort(res.begin(), res.end(), comp);
        return res;
    }
};
