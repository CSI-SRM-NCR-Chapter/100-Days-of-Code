class Solution {
public:
    bool isPerfectSquare(int num) {
        long int s = 1;
        long int e = num;
        long int m = s+(e-s)/2;
        while(s <= e)
        {
            if (m*m == num)
            {
                return true;
            }
            else if (m*m > num)
            {
                e = m-1;
            }
            else 
            {
                s = m+1;
            }
            m=s+(e-s)/2;
        }
        return false;
    }
};
