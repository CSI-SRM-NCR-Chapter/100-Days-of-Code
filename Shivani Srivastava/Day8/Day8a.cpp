class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]== ' '){
                if(!str.empty())
                    st.push(str);
                str = "";
            }
            else{
                str += s[i];
            }
        }
        st.push(str);
        string ans = "";
        while(!st.empty()){
            if(!ans.empty())
                ans +=' ';
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};