class Solution {
public:
    int findComplement(int num) {
        int bit;
        int result = 0;
        int i = 0;
        while(num!=0){
            bit = num & 1;
            if(bit==1)
            bit = 0;
            else
            bit = 1;
            //if(result > INT_MAX/10 || result < INT_MIN )
            //return 0
                
            result+= (bit) * pow(2,i)  ;
            i++;
            num = num >> 1;
            
        }
        return result ;
    }
};