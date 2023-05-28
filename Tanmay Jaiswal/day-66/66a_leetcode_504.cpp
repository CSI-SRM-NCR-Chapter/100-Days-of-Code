class Solution {
    string s = "";
public:
    string convertToBase7(int num, bool flag = 0) {
        if (num==0) {
            reverse(begin(s), end(s)); 
            if (s.size() == 0) s = "0";
            return flag? "-"+s: s;
        }

        if (num<0) flag = 1;
        s.push_back(abs(num)%7 + '0');

        return convertToBase7(abs(num)/7, flag);
    }
};
