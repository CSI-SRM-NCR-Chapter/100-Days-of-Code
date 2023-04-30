vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
};

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st;
        for (auto word: words) {
            string t = "";
            for (auto i: word) {
                t += v[i-97];
            }

            st.insert(t);
        }

        return st.size();
    }
};
