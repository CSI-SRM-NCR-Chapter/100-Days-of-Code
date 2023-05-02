class Solution {
public:
    int mySqrt(int x) {
        long int temp;
        for(long int i=0;;i++){
            if(i*i==x){
                temp=i;
                return i;
            }
            else if(i*i<x){
                temp=i;
                continue;
            }
            
            else return temp;
        }
        return -1;
    }
};
