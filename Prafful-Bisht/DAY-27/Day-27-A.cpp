class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int lastbit = n%2;
        n=n/2;
        while(n>0){
            int currbit = n%2;
            if(currbit==lastbit) return false;
            lastbit = currbit;
            n=n/2;
        }
        return true;
    }
};