class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        for (int i=0; i<n; i++)
            if (s.substr(i, n-i) + s.substr(0,i) == goal) 
                return true;

        return false;
    }
};
