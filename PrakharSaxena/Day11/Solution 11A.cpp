class Solution {
public:
    int hammingDistance(int x, int y) {
        long int count=0;
        for(int i = x^y;i!=0;i>>=1){
            if(i&1==1){
                count++;
            }
        }
        return count;
    }
};