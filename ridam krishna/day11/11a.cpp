class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=x^y;
        int count=0;
        while (res){
            if(res & 1) count++;
            res>>=1;
        }
        return count;
    }
};
