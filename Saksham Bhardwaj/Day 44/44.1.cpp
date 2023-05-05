class Solution {
private:
    int keepsOndividingUntilPossible(int dividend, int divisor){
        while(dividend % divisor == 0){
            dividend /= divisor;
        }
        return dividend;
    }
public:
    int nthUglyNumber(int n) {
        int i=0, count=0;
        while(count < n){
            int isUgly = i+1;
            for(auto factor : {2,3,5}){
                isUgly = keepsOndividingUntilPossible(isUgly, factor);
            }
            if(isUgly == 1){
                count++;
            }
            i++;
        }
        return i;
    }
};
