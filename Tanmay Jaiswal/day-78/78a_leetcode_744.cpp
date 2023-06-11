class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int index = -1;
        int s = 0, e = letters.size()-1;

        while (s<=e) {
            int m = (s+e)/2;

            if (letters[m] > target) {
                index = m;
                e = m-1;
            }
            else s = m+1;
        }

        return index>-1? letters[index]: letters[0];
    }
};
