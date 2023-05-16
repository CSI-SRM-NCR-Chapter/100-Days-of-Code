
class Solution {
public:
    int findComplement(int num) {
        long powerof2s = 1, temp = num;
        
        while( temp ) {
            temp >>= 1;
            powerof2s <<= 1;
        }
        
        return (powerof2s - 1)^num;
    }
};
