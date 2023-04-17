class Solution {
public:
    bool canConstruct(string ransomNote, string magazine);
    
    void updateMap(string &s, unordered_map<char,int> &m);
};
/****************************************************************************/
bool Solution::canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> m1, m2;
    unordered_map<char, int>::iterator it;
    updateMap(ransomNote, m1);
    updateMap(magazine, m2);
    for (it = m1.begin(); it != m1.end(); ++it) {
        if (m2.find(it->first) == m2.end() || it->second > m2[it->first]) {
            return false;
        } 
    }
    return true;  
}
/****************************************************************************/
void Solution::updateMap(string &s, unordered_map<char,int> &m) {
    int i, size = s.size();
    for (i = 0; i < size; ++i) {
        ++m[s[i]]; 
    }
    return;
}
/****************************************************************************/