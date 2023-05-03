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
        
        for (auto i: words) {
            string t="";
            for (auto j: i)
                t += f[j-'a'];

            s.insert(t);
        }

        return s.size();
    }
};
