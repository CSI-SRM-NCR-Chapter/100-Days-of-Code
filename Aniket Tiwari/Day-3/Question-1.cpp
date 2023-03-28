#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long rev=x%10;
        int temp=x;
        x/=10;
        while(x!=0){
            rev=rev*10+(x%10);
            x/=10;
        }
        return rev==temp;
    }
};