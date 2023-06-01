class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left; i<=right; i++) {
            string s = to_string(i);
            bool flag = 1;
            if (find(begin(s), end(s), '0') == end(s)) {
                for (auto x: s)
                    if (i % (x-'0') != 0) 
                        {flag = 0; break;}
                
                if (flag) ans.push_back(i);
            }

        }

        return ans;
    }
};
