class Solution {
public:
    int mySqrt(int N) {
        if (N<=1) return N;

        int s = 1, e = N/2, m = 0;
        int ans = 1;

        while(s<=e) {
            m =  s+(e-s)/2;
            if (m > N/m) e = m-1;
            else ans = m, s = m+1;
        }
        
        return ans;
    }
};