class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(auto x: letters){
            if(target<x) return x;
        }
        return letters[0];
    }
};
