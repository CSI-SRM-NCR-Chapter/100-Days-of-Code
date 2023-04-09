class Solution {
public:
    bool isUgly(int n) {
        if(n==0){
            return 0;
        }
        vector<int> factor={2,3,5};
        int i=0;
        while(n!=1 and i<=2){
            while(n%factor[i]==0){
                n/=factor[i];
            }
            i++;
        }
        if(n!=1){
            return 0;
        }
        return 1;
    }
};