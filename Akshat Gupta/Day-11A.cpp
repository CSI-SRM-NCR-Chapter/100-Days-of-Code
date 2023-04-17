class Solution {
public:
    int hammingDistance(int x, int y) {
        int p = x ^ y;
        int count = 0 ;
        while(p != 0){
            p-= (p & (-p));
            count++;
        }
        return count;
    }
};