class Solution {
public:
    int minTimeToType(string word) {
        int count=0;
        char prev='a';
        for(int i=0; i<word.length(); i++){
            count+= min(26-abs(prev-word[i]), abs(prev-word[i]))+1;
            prev=word[i];
        }
        return count;
    }
};
