class Solution {
public:
    int hammingDistance(int x, int y) {
        int xXORy = x^y;
        int distance = 0;
        while(xXORy){
            distance+=xXORy%2;
            xXORy/=2;
        }
        return distance;
    }
};
