class Solution {
public:
    int addDigits(int num) {
        // O(1)
        if(num==0){
            return 0;
        }
        else if(num%9==0){
            return 9;
        }
        else{
            return num%9;
        }
    }
};