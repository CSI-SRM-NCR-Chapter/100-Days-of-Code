class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);

        int k=s.size();
        int ans = 0;
        
        for(int i=0; i<k; i++) {
            if(s[i] == '(') stk.push(i);
            else {
                stk.pop();
                if(stk.empty()) stk.push(i);
                else ans = max(i-stk.top(), ans);
            }
        }
        return ans;
    }
};
