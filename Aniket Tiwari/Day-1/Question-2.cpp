#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        int i;
        for (i=0;i<n;i++){
            int num=i+1;
            if(num%3==0&&num%5==0)
            res[i]=("FizzBuzz");
            else if(num%3==0)
            res[i]=("Fizz");
            else
            res[i]=num+"";
        }
        return res;
    }
};

int main(){
    Solution s;
    s.fizzBuzz(3);
}