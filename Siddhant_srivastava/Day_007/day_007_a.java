public class Solution {
    public static boolean isUgly(int num) {
        if (num <= 0)return false;
        int divisors[] = {2, 3, 5};
        for(int d =0;d<3;d++)
        while (num % divisors[d] == 0)
        num /= divisors[d];
        return num == 1;
    }
}