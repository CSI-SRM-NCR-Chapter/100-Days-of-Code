class Solution {
public:
    bool is_possible(int num){
        int n = num;
        while(n){
            int digit = n % 10;
            if(digit == 0) return false;
            if(num % digit != 0) return false;
            n = n / 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right){
        vector<int> res;
        for(int i = left; i <= right; i++){
            if(is_possible(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};
