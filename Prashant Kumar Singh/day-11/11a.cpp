class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        string a = bitset<32>(x).to_string();
        string b = bitset<32>(y).to_string();
        for(int i=0; i<32; i++) if(a[i]!=b[i]) ans++;
        return ans;
    }
};
