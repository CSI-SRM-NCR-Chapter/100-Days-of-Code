class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans = "";
        int n = a.size(), m = b.size();
        int i =n-1, j = m-1;

        while (i>=0 and j>=0) {
            carry += (a[i]-'0') + (b[j]-'0');
            
            if (carry > 1) {
                ans.push_back((carry%2) + '0');
                carry /= 2;
            }
            else {
                ans.push_back(carry+'0');
                carry = 0;
            }

            i--, j--;
        }

        while (i>=0) {
            carry += a[i]-'0';

            if (carry > 1) {
                ans.push_back((carry%2) + '0');
                carry /= 2;
            }
            else {
                ans.push_back(carry+'0');
                carry = 0;
            }

            i--;
        }

        while (j>=0) {
            carry += b[j]-'0';

            if (carry > 1) {
                ans.push_back((carry%2) + '0');
                carry /= 2;
            }
            else {
                ans.push_back(carry+'0');
                carry = 0;
            }

            j--;
        }

        reverse(begin(ans), end(ans));

        if (carry > 0) return "1" + ans;
        return ans;
    }
};