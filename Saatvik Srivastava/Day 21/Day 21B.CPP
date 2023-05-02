class Solution {
public:
    vector<string> findWords(vector<string> words) {
    string line1 = "qwertyuiop";
    string line2 = "asdfghjkl";
    string line3 = "zxcvbnm";
    
    vector<string> res;
    for (auto word : words) {
        bool l1 = true, l2 = true, l3 = true;
        for (auto ch : word) {
            if (line1.find(tolower(ch)) == string::npos) {
                l1 = false;
                break;
            }
        }
        if (!l1) {
            for (auto ch : word) {
                if (line2.find(tolower(ch)) == string::npos) {
                    l2 = false;
                    break;
                }
            }
        }
        
        if (!l2) {
            for (auto ch : word) {
                if (line3.find(tolower(ch)) == string::npos) {
                    l3 = false;
                    break;
                }
            }
        }
        if (l1 || l2 || l3) {
            res.push_back(word);
        }
    }
    return res;
}


        
    
};
