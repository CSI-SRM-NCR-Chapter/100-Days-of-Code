class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.size();
        int i=0;
        int j=n-1;

        while(i<j){
            if(st.find((s[i]))!=st.end() and st.find((s[j]))!=st.end())
                swap(s[i++],s[j--]);
            else{
                if(st.find((s[i]))==st.end()) i++;
                if(st.find((s[j]))==st.end()) j--;
            }
        }
        return s;
    }
};
