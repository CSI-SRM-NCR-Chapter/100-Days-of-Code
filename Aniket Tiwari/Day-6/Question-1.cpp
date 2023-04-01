#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int i;
        if(n!=t.size())
        return false;
        vector<int> u(26,0);
        for(i=0;i<n;i++){
            u[(int)s[i]-97]++;
            u[(int)t[i]-97]--;
        }
       for(i=0;i<26;i++){
            if(u[i]!=0)
            return false;
        }
        return true;
    }
};