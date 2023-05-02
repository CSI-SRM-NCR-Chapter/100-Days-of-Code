class Solution {
public:
    int mySqrt(int x) {
        long long int start = 0;
        long long int end = x;
        long long int mid = start+(end-start)/2;
        int sq;
        while(start<=end)
        {
            long long int temp = mid*mid;
            if (temp==x)
            {
                sq = mid;
                break;
            }
            else if (temp<x)
            {
                sq = mid;
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return sq;
    }
};
