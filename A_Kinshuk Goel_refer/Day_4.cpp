

int removeDuplicates(int* nums, int numsSize){
    int i=1,j=1;
    while(i<numsSize)
    {
        if(nums[i]==nums[i-1])
        {
            i++;
        }
        else
        {
            nums[j++]=nums[i++];
        }
    }
    return j;
} //Day 4.1

class Solution {
public:
    double myPow(double x, int n) {
        if(n==1||x==1||x==0) return x;
        double res = 1;
        if(n == INT_MIN)
        {
            n++;
            res = x;
        }
        if(n<0) x = 1/x;
        n = abs(n);
        while(n>0)
        {
            if(n&1)
            {
                n--;
                res *= x;
            }
            else
            {
                n>>=1;
                x *= x;
            }
        }
        return res;
    }
}; //Day 4.2