class Solution {
public:
    string toLowerCase(string s) {
        string st="";
        int temp=0;
        for(auto x: s){
            int temp=int(x);
            if(65<=temp and temp<=90) st.push_back(temp+32);
            else st.push_back(temp);
        }
        return st;
    }
};
