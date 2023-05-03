class Solution {
    char f[26][5] = {
        ".-","-...","-.-.","-..",".","..-.","--.","....",
        "..",".---","-.-",".-..","--","-.","---",".--.",
        "--.-",".-.","...","-","..-","...-",".--","-..-",
        "-.--","--.."
        };
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        unordered_set<string> s;
        
        for (auto word: words) {
            string t="";
            for (auto j: word)
                t += f[j-'a'];

            s.insert(t);
        }

        return s.size();
    }
};
