/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1,e=n;
        int mid = s+(e-s)/2;

        while(s <= e ){
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==-1){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s+(e-s)/2;
        }
        return 0;
    }
};
