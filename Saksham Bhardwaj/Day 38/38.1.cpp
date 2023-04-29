class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> v={".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..","--","-.","---",
        ".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
        "-.--","--.."};
        unordered_map <string,int> my;
        string s;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                s+=v[words[i][j]-'a'];
            }
            my[s]=1;
            s.clear();
        }
      return my.size();
    }
};
