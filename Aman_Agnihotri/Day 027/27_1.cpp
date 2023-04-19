class Solution {
public:
    bool hasAlternatingBits(int n) {
        int l = ceil(log2(n));
        bitset<40> b(n);
        int last = b[0];
        for(int i = 1; i < l; i++){
            if(b[i]==last){
                return false;
            }else{
                last = b[i];
            }
        }
        return true;
    }
};
