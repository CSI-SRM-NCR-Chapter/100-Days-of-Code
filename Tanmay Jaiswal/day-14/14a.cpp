class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return 1;

        int s = 1, e = num/2;
        while (s<=e) {
            int mid = (s+e)>>1;
            if (mid == num/mid and num%mid == 0) return true;
            if (mid > num/mid) e = mid-1;
            else s = mid+1;
        }

        return 0;
    }
};
