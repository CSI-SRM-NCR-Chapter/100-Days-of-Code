class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        
       
        int carry = 1;
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        if (carry > 0) {
            ans.push_back(carry);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};