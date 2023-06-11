class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(); 
        vector<int> f(1002);

        for(int i=0; i<n; i++) {
            f[0]++;
            f[citations[i]+1]--;
        }

        int h_index = 0;
        int accumulate = 0;

        for (int i=0; i<1002; i++) {
            accumulate += f[i];
            if (accumulate >= i) h_index = i;
        }

        return h_index;
    }
};
