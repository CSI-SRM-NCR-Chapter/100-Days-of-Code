class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        string t="";
        stack<string>st;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(t.size()!=0){
                    st.push(t);
                    t="";
                }

            }
            else{
                t+=s[i];

            }
        }
        ans=ans+t;
        while(st.size()!=0){
            ans=ans+" "+st.top();
            st.pop();
        }
        if(ans.size()!=0 && ans[0]==' '){
            ans=ans.substr(1);
        }
        return ans;


    }
};
