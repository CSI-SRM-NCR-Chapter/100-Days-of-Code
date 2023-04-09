class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count = 0;
        for (int i=0; i<ransomNote.size(); i++){
            for (int j=0; j<magazine.size(); j++){
                if (ransomNote[i] == magazine[j]){
                    count = 0;
                    magazine[j] = 'A';
                    break;
                }
                else
                    count++;
            }
            if (count == magazine.size())
              return false;
        }
        return true;
    }
};
