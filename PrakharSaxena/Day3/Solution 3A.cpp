#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int l=x;
        if(l<0)
        return false;
        long rev=l%10;
        int temp=l;
        l/=10;
        while(l!=0){
            rev=rev*10+(l%10);
            l/=10;
        }
        return rev==temp;
    }
};