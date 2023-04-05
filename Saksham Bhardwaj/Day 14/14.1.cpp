class Solution {
public:
    bool isPerfectSquare(int num) {
        long int i = 1;
        while (i <= num)
        {
            if (i*i == num)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};
