class Solution {
public:
    int reverse(int x) {
        long long y=0;
        bool flag = (x<0);
        while(x!=0)
        {
            y *= 10;
            y += abs(x%10);
            if (y>INT32_MAX) return 0;
            x /= 10;
        } if(flag) y *= -1;
        return y;
    }
};  // Day 9.1

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size()==0) return res;
        int pos = strs[0].size();
        for(unsigned int i=1;i<strs.size();i++)
        {
            while(strs[i].substr(0,pos)!=strs[0].substr(0,pos)) pos--;
        }
        return strs[0].substr(0,pos);
    }
};  // Day 9.2