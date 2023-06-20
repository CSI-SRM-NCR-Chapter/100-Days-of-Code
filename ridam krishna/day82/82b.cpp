class Solution {
public:
    int hammingWeight(uint32_t n) {
        long int x=n;
        int count=0;
        while(x){
            if(int y=x%2; y==1) count++;
            x>>=1;
        }
        return count;
    }
};
