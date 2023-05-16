class Solution {
public:
    int longestValidParentheses(string s) {
        // this question is being solved by using stack logic:-
        stack<int> st;
        st.push(-1);
        int maxLen = 0;
        // traversing the string:-
        for(int i = 0;i<s.length();i++){
            char c = s[i];
            if(c == '('){
                st.push(i);
            } else {
                st.pop();
                if(st.empty()){
                    st.push(i);
                } else {
                    int len = i - st.top();
                    maxLen = max(len, maxLen);
                }
            }
        }
        return maxLen;
    }
};
