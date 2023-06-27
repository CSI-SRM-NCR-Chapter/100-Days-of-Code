class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;
        int mid = start + (end - start)/2;

        while(start <= end){
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1) end = mid - 1;
            else start = mid + 1;
            mid = start + (end - start)/2;
        }
        return 0;
    }
};
