class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string sr="";
        int n=s.size();

        for(int x=0; x<n; x++){
            if(s[x]!=' '){
                st.push(s[x]);
                if(x==n-1){
                    while(!st.empty()){
                        sr+=st.top();
                        st.pop();
                    }
                    if(x!=n-1)
                    sr+=" ";
                }
            }
            else if(s[x]==' '){
                while(!st.empty()){
                    sr+=st.top();
                    st.pop();
                }
                sr+=" ";
            }
        }
        return sr;
    }
};
