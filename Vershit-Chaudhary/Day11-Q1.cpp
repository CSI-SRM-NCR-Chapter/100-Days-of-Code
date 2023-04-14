class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x!=0 || y!=0){
            if(x!=0 && y!=0 && x%2!=y%2){
                count++;
            }
            else if(x==0 && y!=0 && y%2==1){
                count++;
            }
            else if(y==0 && x!=0 && x%2==1){
                count++;
            }
            x=x/2;
            y=y/2;
        }
        return count;
    }
};
