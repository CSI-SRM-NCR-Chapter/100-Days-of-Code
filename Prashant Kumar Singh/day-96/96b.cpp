class Solution {
public:
    string longestNiceSubstring(string s){
        return fun(s);
    }

    string fun(string str){
        if(str.length() <= 1)
        return "";

        unordered_set<char> st;
        st.insert(str.begin(), str.end());

        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            char temp1 = toupper(ch);
            char temp2 = tolower(ch);

            if(st.find(temp1) == st.end() or st.find(temp2) == st.end()){
                string lft = fun(str.substr(0,i));
                string rgt = fun(str.substr(i+1, str.length()));
                if(lft.length() == rgt.length()) return lft;
                else if(lft.length() > rgt.length()) return lft;
                else return rgt;
            }
        }
        return str;
   }
};
