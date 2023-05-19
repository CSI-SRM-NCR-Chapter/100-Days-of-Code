class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for (auto i:s) {
            if (i=='(' or i=='[' or i=='{') st.push(i);
            else { // pop
                if (!st.empty()) {
                    char x = st.top();
                    if (x=='(' and i==')') st.pop();
                    else if (x=='[' and i==']') st.pop();
                    else if (x=='{' and i=='}') st.pop();
                    else return false;
                }
                else return false;
            }
        }

        return st.empty();
    }
};
