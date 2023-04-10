class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i= n-1;
        digits[i]=digits[i]+1;
        while(digits[i]==10 && i>0)
        {
            digits[i]=0;
            digits[i-1]=digits[i-1]+1;
            i--;
        }
        if(digits[0] == 10){
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
